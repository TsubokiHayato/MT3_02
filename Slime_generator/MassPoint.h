#pragma once
#include<Vector2.h>
class MassPoint
{
public:
    // �R���X�g���N�^
    MassPoint(Vector2 initPosition);

    void Initialize();
private:
    const float MASS = 0.18f;              // ����
    const Vector2 GRAVITY = { 0.0f, 0.1f };// �d��

    float deltaTime = {};                       // �o�ߎ���

    Vector2 position;                      // �ʒu
    Vector2 gravityAcceleration;           // �d�͉����x
    Vector2 springForce;                   // �΂˂̗�
    Vector2 totalForce;                    // ���v�̗�
    Vector2 velocity;                      // ���x
};

