#pragma once
#include<MassPoint.h>
#include<Vector2.h>

class Spring
{
public:
    // コンストラクタ
    Spring(MassPoint* point1, MassPoint* point2);
private:
    const float RESISTANCE = 0.5f;  // 抵抗率
    const float ELASTICITY = 2.0f;  // 弾性率

    MassPoint* p1;                  // 繋げる頂点1
    MassPoint* p2;                  // 繋げる頂点2

    float distance;                 // 元の距離
    float currentDistance;          // 現在の距離

    Vector2 fluctuation;            // 力の増減
};

