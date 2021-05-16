
#include <iostream>
#include <thread>
#include <mutex>
#include <fstream>
#include <future>


using namespace std;

class LogFile {
    std::mutex _mu;
    std::mutex _mu_open;
    ofstream _f;

public:
    LogFile() {
        _f.open("log.txt");
    }                                      // Need destructor to close file
    void shared_print(string id, int value) {
        if (!_f.is_open()) {
            std::unique_lock<mutex> locker2(_mu_open);
            _f.open("log.txt");
        }
        cout << "open LogFile...," << endl;

        // std::lock_guard<mutex> locker(_mu);
        std::unique_lock<mutex> locker(_mu, std::defer_lock);
        // do simething else

        locker.lock();
        _f << "From " << id << " : " << value << endl;
        cout << "From " << id << " : " << value << endl;
        locker.unlock();
        //......


       /* locker.lock();


        std::unique_lock<mutex> locker2 = std::move(locker);*/
    }
};


int factorial(int N) {
    int res = 1;
    for (int i = N; i >1; i--)
    {
        res += i;
    }
    cout << "Result is : " << res << endl;
    return res;
}

#include <deque>
std::deque<std::packaged_task<int()>> task_q;
std::mutex mu;
std::condition_variable cond;

void thread_1() {
    std::packaged_task<int()> t;
    {                                                         
        std::unique_lock<std::mutex> locker(mu);
        cond.wait(locker, [](){return !task_q.empty();});
        t = std::move(task_q.front());
        task_q.pop_front();
    }  
    t();
}

int main()
{
    LogFile logfile;
    logfile.shared_print("kim", 1234);



    cout << "End program......." << endl;

   

    cout << "\nFactorial Function  ......." << endl;
    std::thread t1(thread_1);
    std::packaged_task<int()> t(std::bind(factorial, 6));
    std::future<int> fu = t.get_future();
    {
        std::lock_guard<std::mutex> locker(mu);
        task_q.push_back(std::move(t));
    }
    cond.notify_one();

    cout << fu.get() << endl;
    t1.join();


    factorial(10000);

    return 0;
}