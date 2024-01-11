#pragma once
#include <random>


namespace Project1 {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label1;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(58, 71);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(61, 57);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(125, 71);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(61, 57);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(192, 71);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(61, 57);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(58, 134);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(61, 57);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(125, 134);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(61, 57);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(192, 134);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(61, 57);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(58, 197);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(61, 57);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(125, 197);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(61, 57);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(192, 197);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(61, 57);
			this->button9->TabIndex = 8;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 30));
			this->label1->Location = System::Drawing::Point(63, 278);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(190, 72);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Start";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(306, 371);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	// 2,4
	if (button4->Text == "") {
		button4->Text = button1->Text;
		button1->Text = "";
	}
	if (button2->Text == "") {
		button2->Text = button1->Text;
		button1->Text = "";
	}
	if (button1->Text=="1" && button2->Text == "2" && button3->Text == "3" && button4->Text == "4" && button5->Text == "5" && button6->Text == "6" && button7->Text == "7" && button8->Text == "8"){
		label1->Text = "WIN";
	}
	
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// 1,3,5
	if (button5->Text == "") {
		button5->Text = button2->Text;
		button2->Text = "";
	}
	if (button3->Text == "") {
		button3->Text = button2->Text;
		button2->Text = "";
	}
	if (button1->Text == "") {
		button1->Text = button2->Text;
		button2->Text = "";
	}
	if (button1->Text == "1" && button2->Text == "2" && button3->Text == "3" && button4->Text == "4" && button5->Text == "5" && button6->Text == "6" && button7->Text == "7" && button8->Text == "8") {
		label1->Text = "WIN";
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	// 2,6
	if (button6->Text == "") {
		button6->Text = button3->Text;
		button3->Text = "";
	}
	if (button2->Text == "") {
		button2->Text = button3->Text;
		button3->Text = "";
	}
	if (button1->Text == "1" && button2->Text == "2" && button3->Text == "3" && button4->Text == "4" && button5->Text == "5" && button6->Text == "6" && button7->Text == "7" && button8->Text == "8") {
		label1->Text = "WIN";
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	// 1,5,7
	if (button7->Text == "") {
		button7->Text = button4->Text;
		button4->Text = "";
	}
	if (button5->Text == "") {
		button5->Text = button4->Text;
		button4->Text = "";
	}
	if (button1->Text == "") {
		button1->Text = button4->Text;
		button4->Text = "";
	}
	if (button1->Text == "1" && button2->Text == "2" && button3->Text == "3" && button4->Text == "4" && button5->Text == "5" && button6->Text == "6" && button7->Text == "7" && button8->Text == "8") {
		label1->Text = "WIN";
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	// 2,4,8
	// 2,6,8
	if (button8->Text == "") {
		button8->Text = button5->Text;
		button5->Text = "";
	}
	if (button4->Text == "") {
		button4->Text = button5->Text;
		button5->Text = "";
	}
	if (button2->Text == "") {
		button2->Text = button5->Text;
		button5->Text = "";
	}
	if (button6->Text == "") {
		button6->Text = button5->Text;
		button5->Text = "";
	}
	if (button1->Text == "1" && button2->Text == "2" && button3->Text == "3" && button4->Text == "4" && button5->Text == "5" && button6->Text == "6" && button7->Text == "7" && button8->Text == "8") {
		label1->Text = "WIN";
		button9->Text = "9";
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	// 3,5,9
	if (button9->Text == "") {
		button9->Text = button6->Text;
		button6->Text = "";
	}
	if (button5->Text == "") {
		button5->Text = button6->Text;
		button6->Text = "";
	}
	if (button3->Text == "") {
		button3->Text = button6->Text;
		button6->Text = "";
	}
	if (button1->Text == "1" && button2->Text == "2" && button3->Text == "3" && button4->Text == "4" && button5->Text == "5" && button6->Text == "6" && button7->Text == "7" && button8->Text == "8") {
		label1->Text = "WIN";
		button9->Text = "9";
	}

}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	// 4, 8
	if (button8->Text == "") {
		button8->Text = button7->Text;
		button7->Text = "";
	}
	if (button4->Text == "") {
		button4->Text = button7->Text;
		button7->Text = "";
	}
	if (button1->Text == "1" && button2->Text == "2" && button3->Text == "3" && button4->Text == "4" && button5->Text == "5" && button6->Text == "6" && button7->Text == "7" && button8->Text == "8") {
		label1->Text = "WIN";
		button9->Text = "9";
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	// 5, 7, 9
	if (button9->Text == "") {
		button9->Text = button8->Text;
		button8->Text = "";
	}
	if (button7->Text == "") {
		button7->Text = button8->Text;
		button8->Text = "";
	}
	if (button5->Text == "") {
		button5->Text = button8->Text;
		button8->Text = "";
	}
	if (button1->Text == "1" && button2->Text == "2" && button3->Text == "3" && button4->Text == "4" && button5->Text == "5" && button6->Text == "6" && button7->Text == "7" && button8->Text == "8") {
		label1->Text = "WIN";
		button9->Text = "9";
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	// 6, 8
	if (button6->Text == "") {
		button6->Text = button9->Text;
		button9->Text = "";
	}
	if (button8->Text == "") {
		button8->Text = button9->Text;
		button9->Text = "";
	}
	if (button1->Text == "1" && button2->Text == "2" && button3->Text == "3" && button4->Text == "4" && button5->Text == "5" && button6->Text == "6" && button7->Text == "7" && button8->Text == "8") {
		label1->Text = "WIN";
		button9->Text = "9";
	}
}

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	button9->Text = "";
	label1->Text = "";
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dis(1, 8);
	int arr[8];
	int temp[8] = { 0 };

	for (int i = 0; i < 8; i++) {
		int randomNumber = dis(gen);
		while (temp[randomNumber - 1] != 0) {
			randomNumber = dis(gen);
		}
		arr[i] = randomNumber;
		temp[randomNumber - 1] = 1;
	}
	button1->Text = System::Convert::ToString(arr[0]);
	button2->Text = System::Convert::ToString(arr[1]);
	button3->Text = System::Convert::ToString(arr[2]);
	button4->Text = System::Convert::ToString(arr[3]);
	button5->Text = System::Convert::ToString(arr[4]);
	button6->Text = System::Convert::ToString(arr[5]);
	button7->Text = System::Convert::ToString(arr[6]);
	button8->Text = System::Convert::ToString(arr[7]);
}
};
}
