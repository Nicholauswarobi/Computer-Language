// INHERITANCE
/*The process of getting the property of one class into another class.*/

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

// Child (Derived) Class
class CookingYouTubeChannel:public YouTubeChannel{
    public:
        CookingYouTubeChannel(string name, string ownerName): YouTubeChannel(name, ownerName){

    }

    void PracticingCooking(){
        cout << OwnerName << ", You are welcome to learn how to cook different types of recipes for free...." << endl;
    }

};
int main(){
    CookingYouTubeChannel ytcooking("Empire", "Nungu");
    ytcooking.PublishVideo("Tambi yai");
    ytcooking.PublishVideo("Ndazi Nyama");
    ytcooking.Subscribers();    
    ytcooking.Subscribers();
    ytcooking.Getinfo();
    ytcooking.PracticingCooking();


    YouTubeChannel ytchannel("NunguProgemmer", "Nungu Nicholaus");
    ytchannel.Subscribers();
    ytchannel.Unsubscribers();
    ytchannel.PublishVideo("HTML and CSS for Beginners");
    ytchannel.Getinfo();

}
