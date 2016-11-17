#pragma once

namespace Form1 {

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
	private: System::Windows::Forms::Button^  btnOK;
	private: System::Windows::Forms::PictureBox^  picImagem1;
	protected: 

	protected: 

	private: System::Windows::Forms::TextBox^  txt1;

	private: System::Windows::Forms::Label^  lblMsg;
	private: System::Windows::Forms::CheckBox^  chkNome;


	private: System::Windows::Forms::GroupBox^  grp1;
	private: System::Windows::Forms::RadioButton^  rdb2;

	private: System::Windows::Forms::RadioButton^  rdb1;







	private: System::Windows::Forms::ComboBox^  cmbSelecao;
	private: System::Windows::Forms::RadioButton^  rdb3;



	private: System::Windows::Forms::CheckBox^  chkIdade;










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
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->picImagem1 = (gcnew System::Windows::Forms::PictureBox());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->lblMsg = (gcnew System::Windows::Forms::Label());
			this->chkNome = (gcnew System::Windows::Forms::CheckBox());
			this->grp1 = (gcnew System::Windows::Forms::GroupBox());
			this->rdb3 = (gcnew System::Windows::Forms::RadioButton());
			this->rdb2 = (gcnew System::Windows::Forms::RadioButton());
			this->rdb1 = (gcnew System::Windows::Forms::RadioButton());
			this->cmbSelecao = (gcnew System::Windows::Forms::ComboBox());
			this->chkIdade = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picImagem1))->BeginInit();
			this->grp1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnOK
			// 
			this->btnOK->Location = System::Drawing::Point(29, 265);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(75, 23);
			this->btnOK->TabIndex = 0;
			this->btnOK->Text = L"Vai Planeta!";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &Form1::btnOK_Click);
			// 
			// picImagem1
			// 
			this->picImagem1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"picImagem1.Image")));
			this->picImagem1->Location = System::Drawing::Point(171, 54);
			this->picImagem1->Name = L"picImagem1";
			this->picImagem1->Size = System::Drawing::Size(191, 185);
			this->picImagem1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picImagem1->TabIndex = 1;
			this->picImagem1->TabStop = false;
			// 
			// txt1
			// 
			this->txt1->Location = System::Drawing::Point(29, 73);
			this->txt1->Name = L"txt1";
			this->txt1->Size = System::Drawing::Size(100, 20);
			this->txt1->TabIndex = 2;
			// 
			// lblMsg
			// 
			this->lblMsg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblMsg->Location = System::Drawing::Point(29, 9);
			this->lblMsg->Name = L"lblMsg";
			this->lblMsg->Size = System::Drawing::Size(333, 42);
			this->lblMsg->TabIndex = 3;
			this->lblMsg->Text = L"Mensagem";
			this->lblMsg->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// chkNome
			// 
			this->chkNome->AutoSize = true;
			this->chkNome->Location = System::Drawing::Point(29, 113);
			this->chkNome->Name = L"chkNome";
			this->chkNome->Size = System::Drawing::Size(54, 17);
			this->chkNome->TabIndex = 4;
			this->chkNome->Text = L"Nome";
			this->chkNome->UseVisualStyleBackColor = true;
			// 
			// grp1
			// 
			this->grp1->Controls->Add(this->rdb3);
			this->grp1->Controls->Add(this->rdb2);
			this->grp1->Controls->Add(this->rdb1);
			this->grp1->Location = System::Drawing::Point(29, 170);
			this->grp1->Name = L"grp1";
			this->grp1->Size = System::Drawing::Size(136, 89);
			this->grp1->TabIndex = 5;
			this->grp1->TabStop = false;
			this->grp1->Text = L"Tipo";
			// 
			// rdb3
			// 
			this->rdb3->AutoSize = true;
			this->rdb3->Location = System::Drawing::Point(6, 61);
			this->rdb3->Name = L"rdb3";
			this->rdb3->Size = System::Drawing::Size(88, 17);
			this->rdb3->TabIndex = 2;
			this->rdb3->TabStop = true;
			this->rdb3->Text = L"Opção Verde";
			this->rdb3->UseVisualStyleBackColor = true;
			// 
			// rdb2
			// 
			this->rdb2->AutoSize = true;
			this->rdb2->Location = System::Drawing::Point(6, 42);
			this->rdb2->Name = L"rdb2";
			this->rdb2->Size = System::Drawing::Size(104, 17);
			this->rdb2->TabIndex = 1;
			this->rdb2->TabStop = true;
			this->rdb2->Text = L"Opção Vermelha";
			this->rdb2->UseVisualStyleBackColor = true;
			// 
			// rdb1
			// 
			this->rdb1->AutoSize = true;
			this->rdb1->Location = System::Drawing::Point(6, 19);
			this->rdb1->Name = L"rdb1";
			this->rdb1->Size = System::Drawing::Size(80, 17);
			this->rdb1->TabIndex = 0;
			this->rdb1->TabStop = true;
			this->rdb1->Text = L"Opção Azul";
			this->rdb1->UseVisualStyleBackColor = true;
			// 
			// cmbSelecao
			// 
			this->cmbSelecao->FormattingEnabled = true;
			this->cmbSelecao->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7", 
				L"8", L"9"});
			this->cmbSelecao->Location = System::Drawing::Point(228, 256);
			this->cmbSelecao->Name = L"cmbSelecao";
			this->cmbSelecao->Size = System::Drawing::Size(121, 21);
			this->cmbSelecao->TabIndex = 6;
			// 
			// chkIdade
			// 
			this->chkIdade->AutoSize = true;
			this->chkIdade->Location = System::Drawing::Point(29, 136);
			this->chkIdade->Name = L"chkIdade";
			this->chkIdade->Size = System::Drawing::Size(53, 17);
			this->chkIdade->TabIndex = 7;
			this->chkIdade->Text = L"Idade";
			this->chkIdade->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(374, 312);
			this->Controls->Add(this->chkIdade);
			this->Controls->Add(this->cmbSelecao);
			this->Controls->Add(this->grp1);
			this->Controls->Add(this->chkNome);
			this->Controls->Add(this->lblMsg);
			this->Controls->Add(this->txt1);
			this->Controls->Add(this->picImagem1);
			this->Controls->Add(this->btnOK);
			this->Name = L"Form1";
			this->Text = L"Meu 1° Programa";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picImagem1))->EndInit();
			this->grp1->ResumeLayout(false);
			this->grp1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: System::Void btnOK_Click(System::Object^  sender, System::EventArgs^  e) {
			lblMsg->Text = "";
			if(chkNome->Checked)
				lblMsg->Text = lblMsg->Text +  "Sansão,";
			if(chkIdade->Checked)
				lblMsg->Text = lblMsg->Text +  "2 meses,";
			lblMsg->Text = lblMsg->Text + "filhotes:" +
				System::Convert::ToString(cmbSelecao->SelectedItem) + ",";
			lblMsg->Text = lblMsg->Text + txt1->Text;
			if(rdb1->Checked)
				lblMsg->ForeColor = System::Drawing::Color::Blue;
			if(rdb2->Checked)
				lblMsg->ForeColor = System::Drawing::Color::Red;
			if(rdb3->Checked)
				lblMsg->ForeColor = System::Drawing::Color::Green;
		 }


private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {

		 }
};
}

