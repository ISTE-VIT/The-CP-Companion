
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

// A structure to store the details of the event
struct event{
    string name;
    int start;
    int end;
};

// A custom compare function that compares the end times of the events.
bool cmp(const struct event &a, const struct event &b){
    return a.end < b.end;
}

int main(){
    struct event arr[] = {
        {.name = "Swimming", .start = 5, .end = 7},
        {.name = "Music", .start = 9, .end = 12},
        {.name = "Dance", .start = 10, .end = 15},
        {.name = "Stunt", .start = 14, .end = 16},
    }; // initialising the array elements
    sort(arr,arr+4,cmp);
    cout<<"Events that can be attended : \n";
    cout<<arr[0].name<<"\n";
    int k = 0; // Keeps track of the last event that we have selected
    for(int i=1;i<4;i++){
        if(arr[i].start >= arr[k].end){
            cout<<arr[i].name<<"\n";
            k = i;
        }
    }

}
