#include <iostream>
#include <fstream>

#include "MyFile.h"


MyFile::MyFile (string path_) //конструктор
{
    fstream fstr_ (path_, ios::ate); //открываем фаил для чтения 
     if (fstr_) { //если открылся, устанавливаем член-данные
         exist = 1;
         size = fstr_.tellg(); //размер в KB 

     }
     else {
         exist = 0;
         size = 0;
     }
     path = path_;  //сохр путь к файлу 
}



void MyFile::UpdateExist(bool exist_) //обновляем существование 
{
    exist = exist_;
    if (exist) //если существует
        cout << "File now exists" << endl;
    else    //если не существует
        cout << "File now doesn`t exists"<< endl;
}

void MyFile::UpdateSize(int size_)
{
    if (exist) //если существует
    {
        //присваиваем и выводим размер
        size = size_;
        cout << "File size is " << size << " KB now" << endl;
    }
}
