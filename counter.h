#pragma once

#include <iostream>

class Counter
{
    
    private:
        int count = 0;


    public:
        Counter()
        {
            //this->count = count;
        }
        Counter(int count) {
            this->count = count;
        }
        int counterPlas() {
            return count++;
        }
        int counterMines() {
            return count--;
        }
        void prinCounter() {
            std::cout << "Текущее значение счетчика:" << count << std::endl;
        }
        /*void setCounter(int num) {
            count = num;
        }*/

    

};

