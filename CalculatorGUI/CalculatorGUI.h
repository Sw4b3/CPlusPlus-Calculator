#pragma once

namespace CalculatorGUI {

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
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  Equal;

	private: System::Windows::Forms::TextBox^  Display;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button14;





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
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->Equal = (gcnew System::Windows::Forms::Button());
			this->Display = (gcnew System::Windows::Forms::TextBox());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button1->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button1->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(1, 42);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(44, 44);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(45, 42);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(44, 44);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(89, 42);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(44, 44);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button4->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Location = System::Drawing::Point(45, 86);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(44, 44);
			this->button4->TabIndex = 3;
			this->button4->Text = L"5";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button5->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button5->Location = System::Drawing::Point(1, 86);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(44, 44);
			this->button5->TabIndex = 4;
			this->button5->Text = L"4";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button6->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button6->Location = System::Drawing::Point(89, 86);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(44, 44);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button7->Location = System::Drawing::Point(133, 86);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(44, 44);
			this->button7->TabIndex = 6;
			this->button7->Text = L"-";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button8->Location = System::Drawing::Point(133, 44);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(44, 44);
			this->button8->TabIndex = 7;
			this->button8->Text = L"+";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button9->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button9->Location = System::Drawing::Point(1, 130);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(44, 44);
			this->button9->TabIndex = 8;
			this->button9->Text = L"7";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button10->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button10->Location = System::Drawing::Point(89, 130);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(44, 44);
			this->button10->TabIndex = 9;
			this->button10->Text = L"9";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button11->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button11->Location = System::Drawing::Point(45, 130);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(44, 44);
			this->button11->TabIndex = 10;
			this->button11->Text = L"8";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button12->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button12->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button12->Location = System::Drawing::Point(177, 86);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(44, 44);
			this->button12->TabIndex = 11;
			this->button12->Text = L"/";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button13->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button13->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button13->Location = System::Drawing::Point(177, 44);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(44, 44);
			this->button13->TabIndex = 12;
			this->button13->Text = L"x";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// Equal
			// 
			this->Equal->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->Equal->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->Equal->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Equal->Location = System::Drawing::Point(133, 130);
			this->Equal->Name = L"Equal";
			this->Equal->Size = System::Drawing::Size(44, 44);
			this->Equal->TabIndex = 13;
			this->Equal->Text = L"=";
			this->Equal->UseVisualStyleBackColor = false;
			this->Equal->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// Display
			// 
			this->Display->BackColor = System::Drawing::SystemColors::InfoText;
			this->Display->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Display->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Display->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Display->Location = System::Drawing::Point(1, 2);
			this->Display->Name = L"Display";
			this->Display->Size = System::Drawing::Size(222, 43);
			this->Display->TabIndex = 14;
			this->Display->Text = L"0";
			this->Display->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->Display->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged_1);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::GrayText;
			this->button15->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button15->Location = System::Drawing::Point(45, 174);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(89, 44);
			this->button15->TabIndex = 15;
			this->button15->Text = L"C";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button14->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button14->Location = System::Drawing::Point(1, 174);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(44, 44);
			this->button14->TabIndex = 16;
			this->button14->Text = L"0";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(223, 219);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->Display);
			this->Controls->Add(this->Equal);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		double x;
		double y;
		double answer;
		char operation;

#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Display->Text == "0") {
		Display->Text = "1";
	}
	else {
		Display->Text =Display->Text + "1";
	}
}
	private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
		y = Convert::ToInt32(Display->Text);

		switch (operation) {
		case '+':
			answer = x + y;
			Display->Text = System::Convert::ToString(answer);
			break;

		case '-':
			answer = x - y;
			Display->Text = System::Convert::ToString(answer);
			break;
		case '*':
			answer = x * y;
			Display->Text = System::Convert::ToString(answer);
			break;
		case '/':
			answer = x / y;
			Display->Text = System::Convert::ToString(answer);
			break;
		}


}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Display->Text == "0") {
		Display->Text = "3";
	}
	else {
		Display->Text = Display->Text + "3";
	}

}
private: System::Void textBox1_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Display->Text == "0") {
		Display->Text = "2";
	}
	else {
		Display->Text = Display->Text + "2";
	}

}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Display->Text == "0") {
		Display->Text = "4";
	}
	else {
		Display->Text = Display->Text + "4";
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Display->Text == "0") {
		Display->Text = "5";
	}
	else {
		Display->Text = Display->Text + "5";
	}
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Display->Text == "0") {
		Display->Text = "6";
	}
	else {
		Display->Text = Display->Text + "6";
	}
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Display->Text == "0") {
		Display->Text = "7";
	}
	else {
		Display->Text = Display->Text + "7";
	}
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Display->Text == "0") {
		Display->Text = "8";
	}
	else {
		Display->Text = Display->Text + "8";
	}
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Display->Text == "0") {
		Display->Text = "9";
	}
	else {
		Display->Text = Display->Text + "9";
	}
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	Display->Text = "0";
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	x = Convert::ToInt32 (Display->Text);
	Display->Text = "0";
	operation = '+';
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	x = Convert::ToInt32(Display->Text);
	Display->Text = "0";
	operation = '-';
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	x = Convert::ToInt32(Display->Text);
	Display->Text = "0";
	operation = '*';
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	x = Convert::ToInt32(Display->Text);
	Display->Text = "0";
	operation = '/';
}
private: System::Void button14_Click_1(System::Object^  sender, System::EventArgs^  e) {
	
		Display->Text = Display->Text + "0";
	
}
};
}
