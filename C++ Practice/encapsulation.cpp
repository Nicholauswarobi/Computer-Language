// ENCAPSULATION 
/*This means that the class attributes should to be public, 
but we need to introduce class public methods to access the attributes*/

#include <iostream>
#include <list>
using namespace std;


// class 
class YouTubeChannel{
    private:
        string Name;
        string OwnerName;
        int SubscriberCount;
        list<string> PublishedVideoTitle;
   
    public:
        YouTubeChannel(string name, string ownerName){
            Name = name;
            OwnerName = ownerName;
            SubscriberCount = 0;
        }

        // Class method to increase subscribers
        void Subscribers(){
            SubscriberCount++;
        }

        // class method to decrease subscribers
        void Unsubscribers(){
            if (SubscriberCount > 0)
                SubscriberCount--;
        }

        // class method for video published
        void PublishVideo(string title){
            PublishedVideoTitle.push_back(title);
        }

        // class method to display informations
        void Getinfo(){
            cout << "Name of the channel: " << Name<< endl;
            cout << "OwnerName of a channel: " << OwnerName << endl;
            cout << "Subscribers: " << SubscriberCount << endl;
            cout << "Video List" << endl;

            for (string VideoList: PublishedVideoTitle){
                cout << VideoList << endl;
           }
           cout << endl;
        }
};

int main(){
    YouTubeChannel ytchannel("NunguProgemmer", "Nungu Nicholaus");
    ytchannel.Subscribers();
    ytchannel.Unsubscribers();
   ytchannel.PublishVideo("HTML and CSS for Beginners");
   ytchannel.Getinfo();

}
