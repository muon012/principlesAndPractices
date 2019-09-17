// This code is only for steps 1-5 of the drill assignment.
#include<iostream>
#include<string>

using namespace std;

int main(void)
{
    double num_1{};
    double num_2{};

    while(cin >> num_1 >> num_2){
        double smaller{};
        double larger{};
        bool are_equal{};
        double difference{};


        // Check which number is greater. The 'are_equal' boolean is false in first 2 cases so no need to change it.
        if(num_1 < num_2){
            smaller = num_1;
            larger = num_2;
        }
        else if(num_1 > num_2){
            smaller = num_2;
            larger = num_1;
        }
        else{
            are_equal = true;
        }

        // Check if the 'are_equal' boolean was true and display appropriate message.
        if(are_equal){
            cout << "The numbers are equal!" << endl;
        }
        else{
            // Calculate the difference between both numbers and see if'ts close to 0.1.
            difference = larger - smaller;
            cout << "The smaller value is " << smaller << ". The larger value is " << larger << endl;
            if(difference <= 0.1){
                cout << "The numbers are almost equal." << endl;
            }
        }
    }

    return 0;
}