#include"Book.h"

class AudioBook:public Book{
    private:
        string voiceActor;
public:
    void printDescription();
    AudioBook(string voiceActor);
    string getVoiceActor();
    void setVoiceActor(string voiceActor);
    void addBook();
    
};
