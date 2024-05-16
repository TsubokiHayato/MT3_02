#pragma once
#include<MassPoint.h>
#include<Vector2.h>

class Spring
{
public:
    // �R���X�g���N�^
    Spring(MassPoint* point1, MassPoint* point2);
private:
    const float RESISTANCE = 0.5f;  // ��R��
    const float ELASTICITY = 2.0f;  // �e����

    MassPoint* p1;                  // �q���钸�_1
    MassPoint* p2;                  // �q���钸�_2

    float distance;                 // ���̋���
    float currentDistance;          // ���݂̋���

    Vector2 fluctuation;            // �͂̑���
};

