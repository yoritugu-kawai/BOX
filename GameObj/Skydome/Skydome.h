#pragma once
#include"Model.h"
#include"math/Matrix/MatrixTrans.h"

class Skydome {
public:
	Skydome();
	~Skydome();

	void Initialize();

	void Update();


	void Draw(ViewProjection view);


private:

	WorldTransform worldTransform_;
	Model* modelSkydome_ = nullptr;

};

