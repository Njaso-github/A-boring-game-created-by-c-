#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    while(true){
        cout << "-------------------- Mental Arithmetic Challenge --------------------" << endl;
        cout << "Author: Jason Wong" << endl << endl;

        srand(time(0));

        long long correct = 0;

        int symbol = rand() % 2;

        int number1 = rand() % 100 + 1;
        int number2 = rand() % 100 + 1;
        int correct_answer;

        for (int x = 0 ; x < 5 ; x++){
            switch(symbol){
            case 0:
                cout << number1 << " + " << number2 << " = ?" << "  correct rate: ( " << correct << " / " << "5 )" << endl;
                correct_answer = number1 + number2;
                break;

            case 1:
                cout << number1 << " - " << number2 << " = ?" << "  correct rate: ( " << correct << " / " << "5 )" << endl;
                correct_answer = number1 - number2;
                break;

            default:
                break;
            }

            long long answer;
            cin >> answer;

            if (answer != 114514 && answer != 1145141919 && answer != 1145141919810){
                if (answer == correct_answer){
                    cout << "Right!" << endl << endl;
                    correct++;
                    number1 = rand() % 100 + 1;
                    number2 = rand() % 100 + 1;
                }else{
                    cout << "Wrong! The actual answer is " << correct_answer << endl << endl;
                    number1 = rand() % 100 + 1;
                    number2 = rand() % 100 + 1;
                }
            }else{
                correct += answer;
                cout << "Hum... hum hum. Ahhhhhhhh Ahhhhhhhhhhhhhhhhhhhhh!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl << endl;
                number1 = rand() % 100 + 1;
                number2 = rand() % 100 + 1;
            }
        }

        cout << "\t     correct rate: ( " << correct << " / " << "5 )" << endl << endl;


        switch(correct){
        case 0:
            cout << "score: " << correct * 20.0 << endl;
            cout << "You suck!" << endl;
            break;

        case 1 ... 2:
            cout << "score: " << correct * 20.0 << endl;
            cout << "It is still suck!" << endl;
            break;

        case 3 ... 4:
            cout << "score: " << correct * 20.0 << endl;
            cout << "Average." << endl;
            break;

        case 5:
            cout << "score: " << correct * 20.0 << endl;
            cout << "It is not bad." << endl;
            break;

        default:
            cout << "Excellent!!!" << endl;
            cout << "score: " << 1145141919810 << endl;
            break;
        }

        cout << endl;
        system("pause");
        cout << endl;
    }
}
