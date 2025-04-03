
// POLYMORPHISM
/*This type of programming, the same function is used to perform different kind of operation..*/

#include <iostream>
#include <list>
using namespace std;


// Parent (Base)class 
class YouTubeChannel{
    private:
        string Name;

        int SubscriberCount;
        list<string> PublishedVideoTitle;
    protected: // used when you need to use one of attribute from parrent class to child class like below we use OwnerName to child class
        string OwnerName;
        int ContentQuality;
    
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

        // check analysis
        void CheckAnalytics(){
            if (ContentQuality < 5){
                cout << Name << " has bad content quality.." << endl;
            } else{
                cout << Name << " has great content.." << endl;
            }
        }
};

// Child (Derived) Class
class CookingYouTubeChannel:public YouTubeChannel{
    public:
        CookingYouTubeChannel(string name, string ownerName): YouTubeChannel(name, ownerName){

    }

    void Practicing(){
        cout << OwnerName << ", You are welcome to learn how to cook different types of recipes for free...." << endl;
        ContentQuality++;
    }

};


// Child2 (Derived) Class
class SingersYouTubeChannel:public YouTubeChannel{
    public:
        SingersYouTubeChannel(string name, string ownerName): YouTubeChannel(name, ownerName){

    }

    void Practicing(){
        cout << OwnerName << ", You are welcome to learn how to sing and dancing a musics for free...." << endl;
        ContentQuality++;
    }

};

int main(){
    CookingYouTubeChannel ytcooking("Empire", "Nungu");
    SingersYouTubeChannel ytsingers("Diamond Platnumz", "Nasibu Abdul");

    ytcooking.Practicing();

    ytsingers.Practicing();
    ytsingers.Practicing();
    ytsingers.Practicing();
    ytsingers.Practicing();
    ytsingers.Practicing();
    ytsingers.Practicing();
    ytsingers.Practicing();

    // Pointer to class and objects
    YouTubeChannel *yt1 = &ytcooking;
    YouTubeChannel *yt2 = &ytsingers;


    // To access analytics method to each objects
    yt1->CheckAnalytics();
    yt2->CheckAnalytics();


}
