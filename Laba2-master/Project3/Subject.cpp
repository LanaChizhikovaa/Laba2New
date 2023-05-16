#include "Subject.h"

#include <algorithm>

void Subject::Attach(Observer*file_)
{
    files.push_back(file_);
    QObject::connect(this,&Subject::SignalExist,file_,&Observer::UpdateExist); //связываем сигнал со слотом
    QObject::connect(this,&Subject::SignalSize,file_,&Observer::UpdateSize);
}

void Subject::Detach(Observer*file_)
{
   files.erase(remove(files.begin(),files.end(), file_), files.end());
    disconnect(this,&Subject::SignalExist,file_,&Observer::UpdateExist);
     disconnect(this,&Subject::SignalSize,file_,&Observer::UpdateSize);
}

// void Subject::NotifyExist(bool exist_)
// {
//     //ищем нужный файл, меняем существование методом MyFile::UpdateExist
//     for (vector<Observer*>::const_iterator iter = files.begin(); iter != files.end(); ++iter) {
//         if (*iter != 0) {
//             (*iter)->UpdateExist(exist_);
//         }
//     }
// }

// void Subject::NotifySize(int size_)
// {
//     //ищем нужный файл, меняем размер методом MyFile::UpdateSize
//     for (vector<Observer*>::const_iterator iter = files.begin(); iter != files.end(); ++iter) {
//         if (*iter != 0) {
//             (*iter)->UpdateSize(size_);
//         }
//     }
// }
