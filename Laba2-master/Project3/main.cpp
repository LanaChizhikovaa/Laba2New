
#include <thread>
#include <iostream>
#include <fstream>
#include "MyFile.h"
#include "ConcreteSubject.h"
#include "Observer.h"

#include <conio.h>
//sdfrgegerg
int main()
{

     ConcreteSubject subj; //объект для отслеживания состояния файла

     while (1) {
         std::string filepath = "";  //создаём переменую путь к файлу

         while (filepath == ""){ //проверка на случайное нажатие enter
             cout << "File name (path): ";
             getline (cin, filepath);
         }
         MyFile file_ (filepath); //источник (файл)
         subj.Attach(&file_); //связываем наблюдателя с источником

         while (!_kbhit()) { //отслеживаение
             std::this_thread::sleep_for( std::chrono::milliseconds( 100 ) );
             system ("cls");//очищаем консоль
                 //проверяем существование, изменяем размер если существует:
                 ifstream str (file_.getPath(), ios::ate); //пытаемся открыть
                 if (str) { //если открылся (существует)
                     subj.ChangeExist(1);
                     subj.ChangeSize(str.tellg());
                 }
                 else { //если не открылся (не существует)
                     subj.ChangeExist(0);
                     subj.ChangeSize(0);
                 }
                 cout << endl;
                 str.close();
             }
         subj.Detach(&file_);//удаляем файл из наблюдения
     }




}
