#include <iostream>
int main()
{
  auto chapter = 1;
  auto name = "Боря";
  auto hairColor = "рыжие";
  auto noseShape = "в веснушках";
  auto earShape = "овальные";
  auto blanketColor = "красным";
  auto blanketTexture = "цветочках";
  auto currentTime = "Шесть";
  auto currentPartOfDay = "утра";
  std::cout <<
    "# Глава " << chapter << "\n"
    "\n"
    "Вселенная огромна и населена различными удивительными созданиями. "
    "Например, " << name << ". "
    "Сейчас он спит и чему-то улыбается во сне. "
    "У него " << hairColor << " волосы, нос " << noseShape<< " и смешные " << earShape << " уши. " <<
    name << " лежит на кровати и накрыт " << blanketColor << " одеялом в " << blanketTexture << ".\n\n"  <<

    currentTime << " " << currentPartOfDay << ". "
    "Включилось радио у будильника. "
    "Зажужжал моторчик и стал открывать жалюзи на окнах. \n";
}
