#include <iostream>
#include <string>
using namespace std;
int main(){

    string hidden= "plushie";
    string ans= "*******";
    char guess;
    int maxguess=0;
    char difficulty;
    
    cout<<"choose difficulty e/m/h"<<endl;
    diff:

    cin>>difficulty;

    int difficultylevel;

    switch (difficulty)
    {
    case 'e':
            difficultylevel=12;
        break;
    
    case 'm':
        difficultylevel=10;
        break;

    case 'h':
        difficultylevel=8;
    default:
        cout<<"no such difficulty level\n enter again\n";
        goto diff;
        
    }
    while (maxguess<difficultylevel)
    {
        cout<<"enter guess"<<endl;
        cin>>guess;

        for (int i = 0; i < hidden.length(); i++)
        {
            if (guess==hidden[i])
            {
                ans[i]=guess;
                cout<<ans<<endl;
            }
            
        }
        
       if (ans==hidden)
       {
        cout<<"word found"<<endl;
        return 0;
       }
       
        
        
        maxguess++;
        
    }
    
    cout<<"you lost"<<endl;
    return 0;

}