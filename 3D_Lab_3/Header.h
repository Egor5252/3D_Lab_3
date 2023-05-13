#pragma once
#include<vector>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

struct Dot2D {
	double x, y;
};

struct Dot3D {
	double x, y, z;
};

std::vector<Dot2D> Dots2D;
std::vector<std::vector<Dot3D>> Dots3D;

std::vector<std::vector<Dot3D>> Create3D(std::vector<Dot2D> Dots, int steps) {
	Dot3D vec{};
	vec.x = Dots[Dots.size() - 1].x;
	vec.y = Dots[Dots.size() - 1].y;
	double dlina = sqrt(pow(vec.x, 2) + pow(vec.y, 2));
	vec.x /= dlina;
	vec.y /= dlina;
	vec.z = 0;

	std::vector<std::vector<Dot3D>> returned;
	std::vector<Dot3D> temporary;
	std::vector<Dot3D> temporary1;

	for (int i = 0; i < Dots.size(); ++i) {
		Dot3D tim{};
		tim.x = Dots[i].x;
		tim.y = Dots[i].y;
		tim.z = 0;
		temporary.push_back(tim);
	}
	returned.push_back(temporary);

	for (int i = 1; i < steps; ++i) {
		double degree = ((360. / steps * i) * 3.1415926535 / 180);
		double MCos = cos(degree);
		double MSin = sin(degree);
		for (int j = 0; j < temporary.size(); ++j) {

			double x = ((MCos + (1 - MCos) * pow(vec.x, 2)) * temporary[j].x) +
				(((1 - MCos) * vec.x * vec.y - MSin * vec.z) * temporary[j].y) +
				(((1 - MCos) * vec.x * vec.z + MSin * vec.y) * temporary[j].z);

			double y = (((1 - MCos) * vec.y * vec.x + MSin * vec.z) * temporary[j].x) +
				((MCos + (1 - MCos) * pow(vec.y, 2)) * temporary[j].y) +
				((1 - MCos) * vec.y * vec.z - MSin * vec.x) * temporary[j].z;

			double z = (((1 - MCos) * vec.z * vec.x - MSin * vec.y) * temporary[j].x) +
				(((1 - MCos) * vec.z * vec.y + MSin * vec.x) * temporary[j].y) +
				((MCos + (1 - MCos) * pow(vec.z, 2)) * temporary[j].z);

			Dot3D G{};
			G.x = x; G.y = y; G.z = z;
			temporary1.push_back(G);
		}
		returned.push_back(temporary1);
		temporary1.resize(0);
	}
	return returned;
};