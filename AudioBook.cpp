#include"AudioBook.h"


AudioBook::AudioBook(string title, string authorName, string voiceActor):title(title), authorName(authorName)
 {
     this->voiceActor=voiceActor;
}
string AudioBook::getVoiceActor()
{
    return this->voiceActor;
}
void AudioBook::setVoiceActor(string voiceActor)
{
    this->voiceActor=voiceActor;
}
void AudioBook::printDescription()
{

}
void AudioBook::addBook()
{
    
}
