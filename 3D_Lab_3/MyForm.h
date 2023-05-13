#pragma once
#include <vector>
#include <cmath>
#include "Header.h"

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
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ button5;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
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
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button5 = (gcnew System::Windows::Forms::Button());
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
			// timer1
			// 
			this->timer1->Interval = 16;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(731, 243);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 38);
			this->button5->TabIndex = 12;
			this->button5->Text = L"Автовращение";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(817, 546);
			this->Controls->Add(this->button5);
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

		//Void Draw3DFunc(std::vector<std::vector<Dot3D>> Dots) {
		//	array<PointF>^ points = gcnew array<PointF>(Dots.size() * Dots[0].size());
		//	for (int i = 0; i < Dots.size(); ++i) {
		//		for (int j = 0; j < Dots[i].size(); ++j) {
		//			points[j + i * Dots[i].size()].X = Dots[i][j].x;
		//			points[j + i * Dots[i].size()].Y = Dots[i][j].y;
		//		}
		//	}
		//	this->Draw3D->DrawLines(Pen2D, points);
		//	this->Draw3D->DrawLines(Pen2D, points);
		//	//Доделать соединение рёбер
		//};

		Void Draw3DFunc(std::vector<std::vector<Dot3D>> Dots) {
			array<PointF>^ points = gcnew array<PointF>(Dots.size() * Dots[0].size());
			for (int i = 0; i < Dots.size(); ++i) {
				for (int j = 0; j < Dots[i].size(); ++j) {
					points[j + i * Dots[i].size()].X = Dots[i][j].x;
					points[j + i * Dots[i].size()].Y = Dots[i][j].y;
				}
			}
			//Доделать соединение рёбер

			Draw3D->DrawLines(Pen2D, points);
			Draw3D->DrawLines(Pen2D, points);
		} // переделать

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
				Dots3D[i][j].x += this->Box3D->Width / 2.;
				Dots3D[i][j].y += this->Box3D->Height / 2.;
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

		double MCos = cos(3.1415926535 / 48);
		double MSin = sin(3.1415926535 / 48);
		for (int i = 0; i < Dots3D.size(); ++i) {
			for (int j = 0; j < Dots3D[i].size(); ++j) {
				double temp_y = MCos * Dots3D[i][j].y - MSin * Dots3D[i][j].z;
				double temp_z = MSin * Dots3D[i][j].y + MCos * Dots3D[i][j].z;
				Dots3D[i][j].y = temp_y;
				Dots3D[i][j].z = temp_z;
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

		double MCos = cos(3.1415926535 / 48);
		double MSin = sin(3.1415926535 / 48);

		for (int i = 0; i < Dots3D.size(); ++i) {
			for (int j = 0; j < Dots3D[i].size(); ++j) {
				double temp_x = MCos * Dots3D[i][j].x + MSin * Dots3D[i][j].z;
				double temp_z = -MSin * Dots3D[i][j].x + MCos * Dots3D[i][j].z;
				Dots3D[i][j].x = temp_x;
				Dots3D[i][j].z = temp_z;
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
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		double t_x, t_y;
		t_x = (Dots3D[0][0].x + Dots3D[0][Dots2D.size() - 1.].x) / 2.;
		t_y = (Dots3D[0][0].y + Dots3D[0][Dots2D.size() - 1.].y) / 2.;

		for (int i = 0; i < Dots3D.size(); ++i) {
			for (int j = 0; j < Dots3D[i].size(); ++j) {
				Dots3D[i][j].x -= t_x;
				Dots3D[i][j].y -= t_y;
			}
		}

		double MCos = cos(3.1415926535 / 96);
		double MSin = sin(3.1415926535 / 96);

		for (int i = 0; i < Dots3D.size(); ++i) {
			for (int j = 0; j < Dots3D[i].size(); ++j) {
				double temp_y = MCos * Dots3D[i][j].y - MSin * Dots3D[i][j].z;
				double temp_z = MSin * Dots3D[i][j].y + MCos * Dots3D[i][j].z;
				Dots3D[i][j].y = temp_y;
				Dots3D[i][j].z = temp_z;
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
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		switch (this->timer1->Enabled)
		{
			case false:
				this->timer1->Enabled = true;
				break;

			case true:
				this->timer1->Enabled = false;
				break;

		}
	}
};
}
