#pragma once
#include<Vector2.h>
class MassPoint
{
public:
    // コンストラクタ
    MassPoint(Vector2 initPosition);

    void Initialize();
private:
    const float MASS = 0.18f;              // 質量
    const Vector2 GRAVITY = { 0.0f, 0.1f };// 重力

    float deltaTime = {};                       // 経過時間

    Vector2 position;                      // 位置
    Vector2 gravityAcceleration;           // 重力加速度
    Vector2 springForce;                   // ばねの力
    Vector2 totalForce;                    // 合計の力
    Vector2 velocity;                      // 速度
};

