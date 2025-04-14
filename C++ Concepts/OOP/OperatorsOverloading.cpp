#include <iostream>
#include <string>
#include <list>
using namespace std;

// struct YouTubeChannel{
//     string Name;
//     int SubscriberCount;

//     YouTubeChannel(string name, int subscriberCount){
//         Name = name;
//         SubscriberCount = subscriberCount;
//     }

// };

// ostream& operator<<(ostream& COUT, YouTubeChannel& ytChannel){

//     COUT << "Name: " << ytChannel.Name << endl;
//     COUT << "SubscriberCount: " << ytChannel.SubscriberCount << endl;

//     return COUT;

// }

// int main(){
//     YouTubeChannel yt1 = YouTubeChannel("Nungu", 75000);
//     YouTubeChannel yt2 = YouTubeChannel("Annastazia", 67892);
//     // cout << yt1 << yt2;

//     // way to run using function operator
//     operator << (cout, yt1);

//     cin.get();

// }



struct YouTubeChannel{
    string Name;
    int SubscriberCount;

    YouTubeChannel(string name, int subscriberCount){
        Name = name;
        SubscriberCount = subscriberCount;
    }

};


ostream& operator<<(ostream& COUT, YouTubeChannel& ytChannel){

    COUT << "Name: " << ytChannel.Name << endl;
    COUT << "SubscriberCount: " << ytChannel.SubscriberCount << endl;

    return COUT;

}


struct MyCollection{
    list<YouTubeChannel>myChannel;

    void operator+=(YouTubeChannel& Channel){
        this->myChannel.push_back(Channel);
    }

};

ostream& operator<<(ostream& COUT, MyCollection& myCollection){
    for (YouTubeChannel ytChannel : myCollection.myChannel)
        COUT << ytChannel << endl;


    return COUT;
}


int main(){
    YouTubeChannel yt1 = YouTubeChannel("Nungu", 75000);
    YouTubeChannel yt2 = YouTubeChannel("Annastazia", 67892);
    // cout << yt1 << yt2;

    // way to run using function operator
    // operator << (cout, yt1);

    MyCollection myCollection;

    myCollection += yt1;
    myCollection += yt2;

    cout << myCollection << endl;

    cin.get();

}
