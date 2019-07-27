#include<iostream>
#include<string>
#include<thread>
#include<vector>

using namespace std;

int vector_test()
{
    vector<string> str {};
    string world;
    while(cin >> world) {
        if (world == "e")
            break;
        if (world != "")
            cout << "world is " << world << endl;
        str.emplace_back(world);
    }

    cout << "szie of str is" << str.size() << endl;
    for (auto temp = str.begin(); temp != str.end(); ++temp) {
            cout << *temp << endl;    
    }
}

int vertor_capacity()
{
    vector<string> str(10,"");
    cout << str.size() <<str.capacity()<< endl;
    string temp;
    while (cin >> temp){
        cout << temp << endl;
        str.push_back(temp);
        cout << str.size() <<str.capacity()<< endl;
    }
}

int main(int argc, char *argv[])
{
    int divides = 0;
    int divisor = 0;
    cout<< "hello world" << endl;
    vertor_capacity();
    //vector_test();
    while (true) {
        cin >> divides;
        cin >> divisor;
        try {
            if (divisor == 0) {
                throw runtime_error("Divisor mustn't be zero\n");
            } else {
            cout << "divides = "<< divides << "divisor = "<< divisor << endl;
            cout << divides << "/" << divisor << "=" << divides / divisor << endl; 
            }
        } catch (runtime_error err) {
            cout << err.what()
                 << "\n Try input again y or n" << endl;
            char c;
            cin >> c;
            if (! cin || c == 'n')
                break;
        }
    }
	return 0;
}
