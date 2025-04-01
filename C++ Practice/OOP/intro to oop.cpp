#include <iostream>
#include <list>
using namespace std;

// Create a class youtube 
class YoutubeChannel{
    public:
        string Name;
        string OwerName;
        int SubscriberCount;
        list<string> PublishedvideoTitle;

};

int main(){
    // Create object For YoutubeChannel Class 
    YoutubeChannel ytChannel;
    ytChannel.Name = "Nungu";
    ytChannel.OwerName = "Nicholaus Nungu";
    ytChannel.SubscriberCount = 1000;
    ytChannel.PublishedvideoTitle = {"HTML and CSS video 1", "JavaScript for Beginner", "Python For Beginner", "C# For Beginners"};


    // Access the data from the objects
    cout << "Name of Channel: " << ytChannel.Name << endl;
    cout << "OwerName of the channel: " << ytChannel.OwerName << endl;
    cout << "Subscribers Count: " << ytChannel.SubscriberCount << endl;
    cout << "Video Lists:" << endl;

    // For accesss data from the list we need loop
    for (string VideoList: ytChannel.PublishedvideoTitle){
        cout<< VideoList << endl;
    }


    return 0;

}




// // How to create CONSTRUCTOR and CLASS METHOD to avoid repeat codes

// #include <iostream>
// #include <list>
// using namespace std;

// // Class
// class YoutubeChannel{
//     public:
//         string Name;
//         string OwnerName;
//         int SubscriberCount;
//         list<string> PublishedVideoTitle;

//         // Rule to create constructor Note: Must have the same name as class name and haven't return type
//         YoutubeChannel(string name, string ownerName){
//             Name = name;
//             OwnerName = ownerName;
//             SubscriberCount = 0;
//         }

//         // Class method used to show the behavior of a class
//         void Getinfo(){
//             cout << "Name of Channel: " << Name << endl;
//             cout << "OwnerName of Channel: " << OwnerName << endl;
//             cout << "Subscribers of Channel: " << SubscriberCount << endl;
//             cout << "Video List" << endl;
//             for (string VideoList: PublishedVideoTitle){
//                 cout << VideoList << endl;
//             }
//             cout << endl;
//         }
// };


// int main(){
//     YoutubeChannel ytchannel("Nungu", "Nicholaus Nungu");
//     ytchannel.PublishedVideoTitle.push_back("HTML and CSS for beginners");
//     ytchannel.PublishedVideoTitle.push_back("Python for beginners");
//     ytchannel.PublishedVideoTitle.push_back("JavaScript for beginners");

//     YoutubeChannel ytchannel2("Warobi", "Warobi Kibabu");
//     ytchannel2.PublishedVideoTitle.push_back("Excel for beginners");
//     ytchannel2.PublishedVideoTitle.push_back("Word for beginners");
//     ytchannel2.PublishedVideoTitle.push_back("PowerPoint for beginners");

//     ytchannel.Getinfo();
//     ytchannel2.Getinfo();

//     return 0;
// }


