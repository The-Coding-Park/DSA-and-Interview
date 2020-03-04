#include<iostream>
using namespace std;
struct Activity
{
    string id;
    int start;
    int finish;
};
void ActivityOptomization(Activity arr[], int n){
    for(int i=0;i<n;i++){
        if(arr[i].finish>arr[i+1].finish){
            Activity tmp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=tmp;

        }
    }
    int i=0;
    // for(int j=0;j<n;j++){
    //     if(arr[j].finish<=arr[j+1].finish){
    //         cout<<arr[j].id;
    //     }
    //     else
    //     {
    //         continue;
    //     }
        
    // }
    for (int j = 1; j < n; j++) 
    { 
      if (arr[j].start >= arr[i].finish) 
      { 
          cout << arr[i].id << ", "
              << arr[j].id; 
          i = j; 
      } 
    } 
}
int main(){
    Activity arr[3];
    for (int i=0;i<3;i++){
        cout<<i+1<<". no activity"<<endl;
        cout<<"id: ";
        cin>>arr[i].id;
        cout<<"start time: ";
        cin>>arr[i].start;
        cout<<"end time: ";
        cin>>arr[i].finish;

    }
    int n =3;
    ActivityOptomization(arr,n);


}
