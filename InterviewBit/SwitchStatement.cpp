#include<iostream>

using namespace std;

int main()  {
    int weekday;
    cin>>weekday;
    string w[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
    switch (weekday)
    {
    case 1:
    // cout<<"Monday\n";
    cout<<w[weekday-1]<<"\n";
    break;
    case 2:
    // cout<<"Tuesday\n";
    cout<<w[weekday-1]<<"\n";
    break;
    case 3:
    // cout<<"Wednesday\n";
    cout<<w[weekday-1]<<"\n";
    break;
    case 4:
    // cout<<"Thursday\n";
    cout<<w[weekday-1]<<"\n";
    break;
    case 5:
    // cout<<"Friday\n";
    cout<<w[weekday-1]<<"\n";
    break;
    case 6:
    // cout<<"Saturday\n";
    cout<<w[weekday-1]<<"\n";
    break;
    case 7:
    // cout<<"Sunday\n";
    cout<<w[weekday-1]<<"\n";
    break;
    default:
    cout<<"Invalid input :\n";
        break;
    }
    return 0;
}

//Question link : https://www.interviewbit.com/problems/switch-statement/

//Input : 4
//Output : Thursday