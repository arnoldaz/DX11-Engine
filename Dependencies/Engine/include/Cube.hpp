#pragma once
#include <Object3D.hpp>
#include <d3d11_2.h>
#include <VertexType.hpp>

class Cube : public Object3D
{
private:
    ID3D11Buffer* _vertexBuffer;
    ID3D11Buffer* _indexBuffer;

public:
    Cube();

    Cube(DirectX::XMFLOAT3 position);

    virtual ~Cube();

    bool Initialize(ID3D11Device* device) override;

    void Update(const float deltaTime) override;

    void Render(ID3D11DeviceContext* deviceContext, ID3D11Buffer* perObjectConstantBuffer) override;
};

