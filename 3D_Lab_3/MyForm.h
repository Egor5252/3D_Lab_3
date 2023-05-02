#pragma once
#include <vector>
#include <cmath>

struct Dot2D {
	double x, y;
};

struct Dot3D {
	double x, y, z;
};

std::vector<Dot2D> Dots2D;
std::vector<std::vector<Dot3D>> Dots3D;

namespace My3DLab3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ Box3D;
	protected:
	private: System::Windows::Forms::PictureBox^ Box2D;



	private: System::Windows::Forms::PictureBox^ pictureBox1;


	private: System::Windows::Forms::NumericUpDown^ Deg3D;
	private: System::Windows::Forms::Button^ ColorPickBtn;
	private: System::Windows::Forms::Button^ Make3DBtn;
	private: System::Windows::Forms::ColorDialog^ Color2D;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;












	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Box3D = (gcnew System::Windows::Forms::PictureBox());
			this->Box2D = (gcnew System::Windows::Forms::PictureBox());
			this->Color2D = (gcnew System::Windows::Forms::ColorDialog());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Deg3D = (gcnew System::Windows::Forms::NumericUpDown());
			this->ColorPickBtn = (gcnew System::Windows::Forms::Button());
			this->Make3DBtn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box3D))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box2D))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Deg3D))->BeginInit();
			this->SuspendLayout();
			// 
			// Box3D
			// 
			this->Box3D->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Box3D->Location = System::Drawing::Point(12, 12);
			this->Box3D->Name = L"Box3D";
			this->Box3D->Size = System::Drawing::Size(713, 330);
			this->Box3D->TabIndex = 0;
			this->Box3D->TabStop = false;
			// 
			// Box2D
			// 
			this->Box2D->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Box2D->Location = System::Drawing::Point(12, 348);
			this->Box2D->Name = L"Box2D";
			this->Box2D->Size = System::Drawing::Size(713, 187);
			this->Box2D->TabIndex = 1;
			this->Box2D->TabStop = false;
			this->Box2D->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Box2D_MouseDown);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(731, 524);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(75, 10);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// Deg3D
			// 
			this->Deg3D->Location = System::Drawing::Point(731, 41);
			this->Deg3D->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 360, 0, 0, 0 });
			this->Deg3D->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->Deg3D->Name = L"Deg3D";
			this->Deg3D->Size = System::Drawing::Size(75, 20);
			this->Deg3D->TabIndex = 5;
			this->Deg3D->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			// 
			// ColorPickBtn
			// 
			this->ColorPickBtn->Location = System::Drawing::Point(731, 495);
			this->ColorPickBtn->Name = L"ColorPickBtn";
			this->ColorPickBtn->Size = System::Drawing::Size(75, 23);
			this->ColorPickBtn->TabIndex = 6;
			this->ColorPickBtn->Text = L"Цвет";
			this->ColorPickBtn->UseVisualStyleBackColor = true;
			this->ColorPickBtn->Click += gcnew System::EventHandler(this, &MyForm::ColorPickBtn_Click);
			// 
			// Make3DBtn
			// 
			this->Make3DBtn->Location = System::Drawing::Point(731, 12);
			this->Make3DBtn->Name = L"Make3DBtn";
			this->Make3DBtn->Size = System::Drawing::Size(75, 23);
			this->Make3DBtn->TabIndex = 7;
			this->Make3DBtn->Text = L"3D";
			this->Make3DBtn->UseVisualStyleBackColor = true;
			this->Make3DBtn->Click += gcnew System::EventHandler(this, &MyForm::Make3DBtn_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(731, 67);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 38);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Поворот вокруг OX";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(731, 111);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 38);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Поворот вокруг OY";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(731, 155);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 38);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Увеличить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(730, 199);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 38);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Уменьшить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(817, 546);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Make3DBtn);
			this->Controls->Add(this->ColorPickBtn);
			this->Controls->Add(this->Deg3D);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Box2D);
			this->Controls->Add(this->Box3D);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm";
			this->Text = L"3D Editor";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box3D))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box2D))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Deg3D))->EndInit();
			this->ResumeLayout(false);

		}
	private:
		Graphics^ Draw2D;
		Graphics^ Draw3D;
		Pen^ Pen2D;

		Void Draw3DFunc(std::vector<std::vector<Dot3D>> Dots3D) {
			for (int i = 0; i < Dots3D.size() - 1; ++i) {
				for (int j = 0; j < Dots3D[i].size() - 1; ++j) {
					//if (Dots3D[i][j].z >= -2) {
						this->Draw3D->DrawLine(Pen2D, int(Dots3D[i][j].x), Dots3D[i][j].y, Dots3D[i][j + 1].x, Dots3D[i][j + 1].y);
						this->Draw3D->DrawLine(Pen2D, int(Dots3D[i][j].x), Dots3D[i][j].y, Dots3D[i + 1][j].x, Dots3D[i + 1][j].y);
					//}
				}
			}
			for (int j = 0; j < Dots3D[0].size() - 1; ++j) {
				//if (Dots3D[0][j].z >= -2) {
					this->Draw3D->DrawLine(Pen2D, int(Dots3D[Dots3D.size() - 1][j].x), Dots3D[Dots3D.size() - 1][j].y,
						Dots3D[Dots3D.size() - 1][j + 1].x, Dots3D[Dots3D.size() - 1][j + 1].y);
					this->Draw3D->DrawLine(Pen2D, int(Dots3D[0][j].x), Dots3D[0][j].y, Dots3D[Dots3D.size() - 1][j].x,
						Dots3D[Dots3D.size() - 1][j].y);
				//}
			}
		};

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
				double degree = ((360. / steps) * i) * 3.1415926535 / 180.;
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
		}

#pragma endregion
		// Инициализация переменных
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Draw2D = this->Box2D->CreateGraphics();
		this->Draw3D = this->Box3D->CreateGraphics();
		this->Pen2D = gcnew Pen(this->Color2D->Color);
		pictureBox1->BackColor = this->Color2D->Color;
	}

		   //Действие нажатия мыши
	private: System::Void Box2D_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		// Рисование точки нажатия
		this->Draw2D->DrawEllipse(this->Pen2D, e->X - 3, e->Y - 3, 6, 6);
		// Добавление точки в вектор
		Dot2D temporary_dot{};
		temporary_dot.x = e->X;
		temporary_dot.y = e->Y;
		Dots2D.push_back(temporary_dot);
		// Соединение точек
		if (Dots2D.size() > 1) {
			this->Draw2D->DrawLine(Pen2D, int(Dots2D[Dots2D.size() - 2].x), Dots2D[Dots2D.size() - 2].y,
				Dots2D[Dots2D.size() - 1].x, Dots2D[Dots2D.size() - 1].y);
		}
	}
		   // Выбор цвета
	private: System::Void ColorPickBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Color2D->ShowDialog();
		this->Pen2D->Color = this->Color2D->Color;
		pictureBox1->BackColor = this->Color2D->Color;
	}
		   // Основная функция рисования 3D объекта
	private: System::Void Make3DBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Draw3D->Clear(Color::WhiteSmoke);
		Pen2D->Width = 3;
		Draw2D->DrawLine(Pen2D, int(Dots2D[0].x), Dots2D[0].y, Dots2D[Dots2D.size() - 1].x, Dots2D[Dots2D.size() - 1].y);

		int steps = 360. / System::Convert::ToInt32(this->Deg3D->Value) + 0.5;
		// Перемешение 2D фигуры в начало координат
		double t_x, t_y;
		t_x = (Dots2D[0].x + Dots2D[Dots2D.size() - 1].x) / 2;
		t_y = (Dots2D[0].y + Dots2D[Dots2D.size() - 1].y) / 2;
		for (int i = 0; i < Dots2D.size(); ++i) {
			Dots2D[i].x -= t_x;
			Dots2D[i].y -= t_y;
		}
		// Создание 3D Объекта
		Dots3D = Create3D(Dots2D, steps);
		//Перенос 3D объекта в центр формы
		for (int i = 0; i < Dots3D.size(); ++i) {
			for (int j = 0; j < Dots3D[i].size(); ++j) {
				Dots3D[i][j].x += this->Box3D->Width / 2;
				Dots3D[i][j].y += this->Box3D->Height / 2;
				// точки this->Draw3D->DrawEllipse(this->Pen2D, Dots3D[i][j].x - 3, Dots3D[i][j].y - 3, 6, 6);
			}
		}
		/*Отрисовка 3D фигуры*/
		Pen2D->Width = 1;
		Draw3DFunc(Dots3D);

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double t_x, t_y;
		t_x = (Dots3D[0][0].x + Dots3D[0][Dots2D.size() - 1.].x) / 2.;
		t_y = (Dots3D[0][0].y + Dots3D[0][Dots2D.size() - 1.].y) / 2.;
		for (int i = 0; i < Dots3D.size(); ++i) {
			for (int j = 0; j < Dots3D[i].size(); ++j) {
				Dots3D[i][j].x -= t_x;
				Dots3D[i][j].y -= t_y;
			}
		}

		double MCos = cos(3.1415926535 / 48.);
		double MSin = sin(3.1415926535 / 48.);
		for (int i = 0; i < Dots3D.size(); ++i) {
			for (int j = 0; j < Dots3D[i].size(); ++j) {
				Dots3D[i][j].y = MCos * Dots3D[i][j].y - MSin * Dots3D[i][j].z;
				Dots3D[i][j].z = MSin * Dots3D[i][j].y + MCos * Dots3D[i][j].z;
			}
		}

		Draw3D->Clear(Color::WhiteSmoke);

		for (int i = 0; i < Dots3D.size(); ++i) {
			for (int j = 0; j < Dots3D[i].size(); ++j) {
				Dots3D[i][j].x += t_x;
				Dots3D[i][j].y += t_y;
			}
		}

		Draw3DFunc(Dots3D);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		double t_x, t_y;
		t_x = (Dots3D[0][0].x + Dots3D[0][Dots2D.size() - 1.].x) / 2.;
		t_y = (Dots3D[0][0].y + Dots3D[0][Dots2D.size() - 1.].y) / 2.;

		for (int i = 0; i < Dots3D.size(); ++i) {
			for (int j = 0; j < Dots3D[i].size(); ++j) {
				Dots3D[i][j].x -= t_x;
				Dots3D[i][j].y -= t_y;
			}
		}

		double MCos = cos(3.1415926535 / 48.);
		double MSin = sin(3.1415926535 / 48.);

		for (int i = 0; i < Dots3D.size(); ++i) {
			for (int j = 0; j < Dots3D[i].size(); ++j) {
				Dots3D[i][j].x = MCos * Dots3D[i][j].x + MSin * Dots3D[i][j].z;
				Dots3D[i][j].z = -MSin * Dots3D[i][j].x + MCos * Dots3D[i][j].z;
			}
		}

		Draw3D->Clear(Color::WhiteSmoke);

		for (int i = 0; i < Dots3D.size(); ++i) {
			for (int j = 0; j < Dots3D[i].size(); ++j) {
				Dots3D[i][j].x += t_x;
				Dots3D[i][j].y += t_y;
			}
		}

		Draw3DFunc(Dots3D);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		double t_x, t_y;
		t_x = (Dots3D[0][0].x + Dots3D[0][Dots2D.size() - 1.].x) / 2.;
		t_y = (Dots3D[0][0].y + Dots3D[0][Dots2D.size() - 1.].y) / 2.;

		for (int i = 0; i < Dots3D.size(); ++i) {
			for (int j = 0; j < Dots3D[i].size(); ++j) {
				Dots3D[i][j].x -= t_x;
				Dots3D[i][j].y -= t_y;
			}
		}

		for (int i = 0; i < Dots3D.size(); ++i) {
			for (int j = 0; j < Dots3D[i].size(); ++j) {
				Dots3D[i][j].x *= 1.05;
				Dots3D[i][j].y *= 1.05;
				Dots3D[i][j].z *= 1.05;
			}
		}

		Draw3D->Clear(Color::WhiteSmoke);

		for (int i = 0; i < Dots3D.size(); ++i) {
			for (int j = 0; j < Dots3D[i].size(); ++j) {
				Dots3D[i][j].x += t_x;
				Dots3D[i][j].y += t_y;
			}
		}

		Draw3DFunc(Dots3D);
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		double t_x, t_y;
		t_x = (Dots3D[0][0].x + Dots3D[0][Dots2D.size() - 1.].x) / 2.;
		t_y = (Dots3D[0][0].y + Dots3D[0][Dots2D.size() - 1.].y) / 2.;

		for (int i = 0; i < Dots3D.size(); ++i) {
			for (int j = 0; j < Dots3D[i].size(); ++j) {
				Dots3D[i][j].x -= t_x;
				Dots3D[i][j].y -= t_y;
			}
		}

		for (int i = 0; i < Dots3D.size(); ++i) {
			for (int j = 0; j < Dots3D[i].size(); ++j) {
				Dots3D[i][j].x /= 1.05;
				Dots3D[i][j].y /= 1.05;
				Dots3D[i][j].z /= 1.05;
			}
		}

		Draw3D->Clear(Color::WhiteSmoke);

		for (int i = 0; i < Dots3D.size(); ++i) {
			for (int j = 0; j < Dots3D[i].size(); ++j) {
				Dots3D[i][j].x += t_x;
				Dots3D[i][j].y += t_y;
			}
		}

		Draw3DFunc(Dots3D);
	}
	};
}
