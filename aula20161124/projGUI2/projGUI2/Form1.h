#pragma once

namespace projGUI2 {

	#define MAXCHARDISP 65

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  LblDisplay;
	protected: 

	private: System::Windows::Forms::Button^  btn7;

	private: System::Windows::Forms::Button^  btn8;
	private: System::Windows::Forms::Button^  btn9;
	private: System::Windows::Forms::Button^  btns1;
	private: System::Windows::Forms::Button^  btnc;
	private: System::Windows::Forms::Button^  btn4;
	private: System::Windows::Forms::Button^  btn5;
	private: System::Windows::Forms::Button^  btn6;
	private: System::Windows::Forms::Button^  btnn;









	private: System::Windows::Forms::Button^  btns2;
	private: System::Windows::Forms::Button^  btnsdiv;
	private: System::Windows::Forms::Button^  btnraiz;





	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  btn0;
	private: System::Windows::Forms::Button^  btnxy;


	private: System::Windows::Forms::Button^  btnx;

	private: System::Windows::Forms::Button^  btn3;

	private: System::Windows::Forms::Button^  btn2;

	private: System::Windows::Forms::Button^  btn1;

	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  btnigual;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->LblDisplay = (gcnew System::Windows::Forms::Label());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btns1 = (gcnew System::Windows::Forms::Button());
			this->btnc = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btnn = (gcnew System::Windows::Forms::Button());
			this->btns2 = (gcnew System::Windows::Forms::Button());
			this->btnsdiv = (gcnew System::Windows::Forms::Button());
			this->btnraiz = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnxy = (gcnew System::Windows::Forms::Button());
			this->btnx = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->btnigual = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// LblDisplay
			// 
			this->LblDisplay->BackColor = System::Drawing::Color::White;
			this->LblDisplay->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->LblDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->LblDisplay->Location = System::Drawing::Point(14, 9);
			this->LblDisplay->Name = L"LblDisplay";
			this->LblDisplay->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->LblDisplay->Size = System::Drawing::Size(267, 36);
			this->LblDisplay->TabIndex = 0;
			this->LblDisplay->Text = L"0";
			// 
			// btn7
			// 
			this->btn7->Location = System::Drawing::Point(14, 61);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(45, 32);
			this->btn7->TabIndex = 1;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &Form1::btn7_Click);
			// 
			// btn8
			// 
			this->btn8->Location = System::Drawing::Point(66, 61);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(47, 32);
			this->btn8->TabIndex = 2;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &Form1::btn8_Click);
			// 
			// btn9
			// 
			this->btn9->Location = System::Drawing::Point(120, 61);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(47, 32);
			this->btn9->TabIndex = 3;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &Form1::btn9_Click);
			// 
			// btns1
			// 
			this->btns1->Location = System::Drawing::Point(174, 61);
			this->btns1->Name = L"btns1";
			this->btns1->Size = System::Drawing::Size(50, 32);
			this->btns1->TabIndex = 4;
			this->btns1->Text = L"+";
			this->btns1->UseVisualStyleBackColor = true;
			this->btns1->Click += gcnew System::EventHandler(this, &Form1::btns1_Click);
			// 
			// btnc
			// 
			this->btnc->Location = System::Drawing::Point(231, 61);
			this->btnc->Name = L"btnc";
			this->btnc->Size = System::Drawing::Size(50, 32);
			this->btnc->TabIndex = 5;
			this->btnc->Text = L"C";
			this->btnc->UseVisualStyleBackColor = true;
			this->btnc->Click += gcnew System::EventHandler(this, &Form1::btnc_Click);
			// 
			// btn4
			// 
			this->btn4->Location = System::Drawing::Point(14, 99);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(45, 31);
			this->btn4->TabIndex = 6;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &Form1::btn4_Click);
			// 
			// btn5
			// 
			this->btn5->Location = System::Drawing::Point(65, 99);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(48, 31);
			this->btn5->TabIndex = 7;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &Form1::btn5_Click);
			// 
			// btn6
			// 
			this->btn6->Location = System::Drawing::Point(120, 99);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(47, 31);
			this->btn6->TabIndex = 8;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &Form1::btn6_Click);
			// 
			// btnn
			// 
			this->btnn->Location = System::Drawing::Point(230, 99);
			this->btnn->Name = L"btnn";
			this->btnn->Size = System::Drawing::Size(51, 31);
			this->btnn->TabIndex = 9;
			this->btnn->Text = L"n!";
			this->btnn->UseVisualStyleBackColor = true;
			// 
			// btns2
			// 
			this->btns2->Location = System::Drawing::Point(173, 99);
			this->btns2->Name = L"btns2";
			this->btns2->Size = System::Drawing::Size(50, 31);
			this->btns2->TabIndex = 11;
			this->btns2->Text = L"-";
			this->btns2->UseVisualStyleBackColor = true;
			this->btns2->Click += gcnew System::EventHandler(this, &Form1::btns2_Click);
			// 
			// btnsdiv
			// 
			this->btnsdiv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnsdiv->Location = System::Drawing::Point(173, 174);
			this->btnsdiv->Name = L"btnsdiv";
			this->btnsdiv->Size = System::Drawing::Size(50, 31);
			this->btnsdiv->TabIndex = 21;
			this->btnsdiv->Text = L"÷";
			this->btnsdiv->UseVisualStyleBackColor = true;
			this->btnsdiv->Click += gcnew System::EventHandler(this, &Form1::btnsdiv_Click);
			// 
			// btnraiz
			// 
			this->btnraiz->Location = System::Drawing::Point(229, 174);
			this->btnraiz->Name = L"btnraiz";
			this->btnraiz->Size = System::Drawing::Size(51, 31);
			this->btnraiz->TabIndex = 20;
			this->btnraiz->Text = L"√¯ ";
			this->btnraiz->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Transparent;
			this->button15->Location = System::Drawing::Point(120, 174);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(47, 31);
			this->button15->TabIndex = 19;
			this->button15->Text = L"±";
			this->button15->UseVisualStyleBackColor = false;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(66, 174);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(48, 31);
			this->button16->TabIndex = 18;
			this->button16->Text = L",";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// btn0
			// 
			this->btn0->Location = System::Drawing::Point(15, 172);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(45, 31);
			this->btn0->TabIndex = 17;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &Form1::btn0_Click);
			// 
			// btnxy
			// 
			this->btnxy->Location = System::Drawing::Point(230, 136);
			this->btnxy->Name = L"btnxy";
			this->btnxy->Size = System::Drawing::Size(50, 32);
			this->btnxy->TabIndex = 16;
			this->btnxy->Text = L"xʸ";
			this->btnxy->UseVisualStyleBackColor = true;
			// 
			// btnx
			// 
			this->btnx->Location = System::Drawing::Point(174, 136);
			this->btnx->Name = L"btnx";
			this->btnx->Size = System::Drawing::Size(50, 32);
			this->btnx->TabIndex = 15;
			this->btnx->Text = L"*";
			this->btnx->UseVisualStyleBackColor = true;
			this->btnx->Click += gcnew System::EventHandler(this, &Form1::btnx_Click);
			// 
			// btn3
			// 
			this->btn3->Location = System::Drawing::Point(120, 136);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(47, 32);
			this->btn3->TabIndex = 14;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &Form1::btn3_Click);
			// 
			// btn2
			// 
			this->btn2->Location = System::Drawing::Point(67, 136);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(47, 32);
			this->btn2->TabIndex = 13;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &Form1::btn2_Click);
			// 
			// btn1
			// 
			this->btn1->Location = System::Drawing::Point(15, 134);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(45, 32);
			this->btn1->TabIndex = 12;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &Form1::btn1_Click);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(181, 269);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(9, 8);
			this->button23->TabIndex = 33;
			this->button23->Text = L"button23";
			this->button23->UseVisualStyleBackColor = true;
			// 
			// btnigual
			// 
			this->btnigual->Location = System::Drawing::Point(66, 218);
			this->btnigual->Name = L"btnigual";
			this->btnigual->Size = System::Drawing::Size(158, 31);
			this->btnigual->TabIndex = 28;
			this->btnigual->Text = L"=";
			this->btnigual->UseVisualStyleBackColor = true;
			this->btnigual->Click += gcnew System::EventHandler(this, &Form1::btnigual_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DeepPink;
			this->ClientSize = System::Drawing::Size(294, 261);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->btnigual);
			this->Controls->Add(this->btnsdiv);
			this->Controls->Add(this->btnraiz);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btnxy);
			this->Controls->Add(this->btnx);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btns2);
			this->Controls->Add(this->btnn);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btnc);
			this->Controls->Add(this->btns1);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->LblDisplay);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"CalcX";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}

		bool separado; 
		double numero;
		char op;

		void LimpaDisplay(){
			separado = false;
			LblDisplay->Text="0";
		}

		void LimpaTudo(){
			LimpaDisplay();
			numero = 0.0;
			op = '/0';
		}

#pragma endregion


	private: System::Void btn1_Click(System::Object^  sender, System::EventArgs^  e) {
				if(LblDisplay->Text->Length < MAXCHARDISP) {
				 if(LblDisplay->Text == "0")
					LblDisplay->Text = "1";
				else
				LblDisplay->Text = LblDisplay->Text + "1";
			 }
			 }

	private: System::Void btn2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(LblDisplay->Text->Length < MAXCHARDISP) {
				 if(LblDisplay->Text == "0")
					LblDisplay->Text = "2";
				else
				LblDisplay->Text = LblDisplay->Text + "2";
		 }
			 }
private: System::Void btn3_Click(System::Object^  sender, System::EventArgs^  e) {
			 	 if(LblDisplay->Text->Length < MAXCHARDISP) {
				 if(LblDisplay->Text == "0")
					LblDisplay->Text = "3";
				else
				LblDisplay->Text = LblDisplay->Text + "3";
		 }
		 }
private: System::Void btn4_Click(System::Object^  sender, System::EventArgs^  e) {
			 	 if(LblDisplay->Text->Length < MAXCHARDISP) {
				 if(LblDisplay->Text == "0")
					LblDisplay->Text = "4";
				else
				LblDisplay->Text = LblDisplay->Text + "4";
		 }
		 }
private: System::Void btn5_Click(System::Object^  sender, System::EventArgs^  e) {
			 	 if(LblDisplay->Text->Length < MAXCHARDISP) {
				 if(LblDisplay->Text == "0")
					LblDisplay->Text = "5";
				else
				LblDisplay->Text = LblDisplay->Text + "5";
		 }
		 }
private: System::Void btn6_Click(System::Object^  sender, System::EventArgs^  e) {
			 	 if(LblDisplay->Text->Length < MAXCHARDISP) {
				 if(LblDisplay->Text == "0")
					LblDisplay->Text = "6";
				else
				LblDisplay->Text = LblDisplay->Text + "6";
		 }
		 }
private: System::Void btn7_Click(System::Object^  sender, System::EventArgs^  e) {
			 	 if(LblDisplay->Text->Length < MAXCHARDISP) {
				 if(LblDisplay->Text == "0")
					LblDisplay->Text = "7";
				else
				LblDisplay->Text = LblDisplay->Text + "7";
		 }
		 }
private: System::Void btn8_Click(System::Object^  sender, System::EventArgs^  e) {
			 	 if(LblDisplay->Text->Length < MAXCHARDISP) {
				 if(LblDisplay->Text == "0")
					LblDisplay->Text = "8";
				else
				LblDisplay->Text = LblDisplay->Text + "8";
		 }
		 }
private: System::Void btn9_Click(System::Object^  sender, System::EventArgs^  e) {
			 	 if(LblDisplay->Text->Length < MAXCHARDISP) {
				 if(LblDisplay->Text == "0")
					LblDisplay->Text = "9";
				else
				LblDisplay->Text = LblDisplay->Text + "9";
		 }
		 }
private: System::Void btn0_Click(System::Object^  sender, System::EventArgs^  e) {
			 	 if(LblDisplay->Text->Length < MAXCHARDISP) {
				 if(LblDisplay->Text != "0")
					LblDisplay->Text = LblDisplay->Text + "0";
		 }
		 }

private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
			if(LblDisplay->Text->Length < MAXCHARDISP && !separado) {
				LblDisplay->Text = LblDisplay->Text + ",";
				separado = true;
			}
		 }


private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 separado = false;
		 }




private: System::Void btns1_Click(System::Object^  sender, System::EventArgs^  e) {
				 numero = System::Convert::ToDouble(LblDisplay->Text);
				 op = '+';
				 LimpaDisplay();
		 }

private: System::Void btns2_Click(System::Object^  sender, System::EventArgs^  e) {
			 numero = System::Convert::ToDouble(LblDisplay->Text);
				 op = '-';
				 LimpaDisplay();
		 }


private: System::Void btnx_Click(System::Object^  sender, System::EventArgs^  e) {
			numero = System::Convert::ToDouble(LblDisplay->Text);
				 op = '*';
				 LimpaDisplay();
		 }

		 //};
private: System::Void btnsdiv_Click(System::Object^  sender, System::EventArgs^  e) {
			 numero = System::Convert::ToDouble(LblDisplay->Text);
				 op = '/';
				 LimpaDisplay();
		 }




		 private: System::Void btnigual_Click(System::Object^  sender, System::EventArgs^  e) {
					  double numero2 = System::Convert::ToDouble(LblDisplay->Text);
					  switch(op){
					  case '+':
						  LblDisplay->Text = System::Convert::ToString(numero + numero2);
						  break;

					  case '-':
						  LblDisplay->Text = System::Convert::ToString(numero - numero2);
						  break;

					  case '*':
						  LblDisplay->Text = System::Convert::ToString(numero * numero2);
						  break;

					  case '/':
						  LblDisplay->Text = System::Convert::ToString(numero / numero2);
						  break;
				  }
				  }
private: System::Void btnc_Click(System::Object^  sender, System::EventArgs^  e) {
			 LimpaTudo();
		 }
};
}

