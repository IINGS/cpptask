#ifndef zoo_h_
#define zoo_h_

#include "animal.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Zoo
{
private:
    Animal* animals[10];
    int alen = animals.size();
public:
    Zoo()
    {
        
    }
    
    
    
    // ������ �������� �߰��ϴ� �Լ�
    // - Animal ��ü�� �����͸� �޾� ������ �迭�� �����մϴ�.
    // - ���� �����̶� ���� �� �߰��� �� �ֽ��ϴ�.
    // - �Է� �Ű�����: Animal* (�߰��� ���� ��ü)
    // - ��ȯ��: ����
    void addAnimal(Animal* animal)
    {
        if (alen >= 10)
        {

        }
    }

    // �������� �ִ� ��� ������ �ൿ�� �����ϴ� �Լ�
    // - ��� ���� ��ü�� ���� ���������� �Ҹ��� ���� �����̴� ������ �����մϴ�.
    // - �Է� �Ű�����: ����
    // - ��ȯ��: ����
    void performActions()
    {
        for (int i = 0; i < 10; i++)
        {
            animals[i]->makeSound();
        }
    }

    // Zoo �Ҹ���
    // - Zoo ��ü�� �Ҹ�� ��, ���� ���Ϳ� ����� ��� ���� ��ü�� �޸𸮸� �����մϴ�.
    // - �޸� ������ �����ϱ� ���� ���� �Ҵ�� Animal ��ü�� `delete` �մϴ�.
    // - �Է� �Ű�����: ����
    // - ��ȯ��: ����
    ~Zoo()
    {

    }
};



#endif