#pragma once

namespace Proyecto1PartyMixErwinLima1158120 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pnlBarra;
	protected:


	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ btn_Save;
	private: System::Windows::Forms::Button^ btn_Open;
	private: System::Windows::Forms::TextBox^ txtPath;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ btn_AgregarPL;

	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::TextBox^ txtArtista;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox3;

	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::Button^ btn_AgregarFR;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::PictureBox^ btn_Play;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ rdb_Nom_OD;

	private: System::Windows::Forms::RadioButton^ rdb_Nom_OA;

	private: System::Windows::Forms::RadioButton^ rdb_Art_OD;

	private: System::Windows::Forms::RadioButton^ rdb_Art_OA;
	private: System::Windows::Forms::PictureBox^ btn_Next;
	private: System::Windows::Forms::PictureBox^ btn_Back;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;






	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pnlBarra = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_Save = (gcnew System::Windows::Forms::Button());
			this->btn_Open = (gcnew System::Windows::Forms::Button());
			this->txtPath = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_AgregarFR = (gcnew System::Windows::Forms::Button());
			this->btn_AgregarPL = (gcnew System::Windows::Forms::Button());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtArtista = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_Next = (gcnew System::Windows::Forms::PictureBox());
			this->btn_Back = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btn_Play = (gcnew System::Windows::Forms::PictureBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->rdb_Nom_OD = (gcnew System::Windows::Forms::RadioButton());
			this->rdb_Nom_OA = (gcnew System::Windows::Forms::RadioButton());
			this->rdb_Art_OD = (gcnew System::Windows::Forms::RadioButton());
			this->rdb_Art_OA = (gcnew System::Windows::Forms::RadioButton());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->pnlBarra->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_Next))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_Back))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_Play))->BeginInit();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// pnlBarra
			// 
			this->pnlBarra->BackColor = System::Drawing::Color::Black;
			this->pnlBarra->Controls->Add(this->pictureBox3);
			this->pnlBarra->Location = System::Drawing::Point(0, 0);
			this->pnlBarra->Name = L"pnlBarra";
			this->pnlBarra->Size = System::Drawing::Size(882, 40);
			this->pnlBarra->TabIndex = 0;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::White;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(844, 0);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(35, 37);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 1;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btn_Save);
			this->groupBox1->Controls->Add(this->btn_Open);
			this->groupBox1->Controls->Add(this->txtPath);
			this->groupBox1->Location = System::Drawing::Point(12, 46);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(275, 100);
			this->groupBox1->TabIndex = 14;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Abrir/Guardar Archivo";
			// 
			// btn_Save
			// 
			this->btn_Save->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)));
			this->btn_Save->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Save->Location = System::Drawing::Point(16, 70);
			this->btn_Save->Name = L"btn_Save";
			this->btn_Save->Size = System::Drawing::Size(75, 23);
			this->btn_Save->TabIndex = 4;
			this->btn_Save->Text = L"Guardar";
			this->btn_Save->UseVisualStyleBackColor = false;
			// 
			// btn_Open
			// 
			this->btn_Open->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(165)),
				static_cast<System::Int32>(static_cast<System::Byte>(190)));
			this->btn_Open->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Open->Location = System::Drawing::Point(16, 33);
			this->btn_Open->Name = L"btn_Open";
			this->btn_Open->Size = System::Drawing::Size(75, 23);
			this->btn_Open->TabIndex = 3;
			this->btn_Open->Text = L"Abrir";
			this->btn_Open->UseVisualStyleBackColor = false;
			// 
			// txtPath
			// 
			this->txtPath->Location = System::Drawing::Point(109, 33);
			this->txtPath->Name = L"txtPath";
			this->txtPath->Size = System::Drawing::Size(158, 20);
			this->txtPath->TabIndex = 2;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->btn_AgregarFR);
			this->groupBox2->Controls->Add(this->btn_AgregarPL);
			this->groupBox2->Controls->Add(this->txtNombre);
			this->groupBox2->Controls->Add(this->txtArtista);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(12, 162);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(275, 272);
			this->groupBox2->TabIndex = 16;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Agregar canción";
			// 
			// btn_AgregarFR
			// 
			this->btn_AgregarFR->AutoSize = true;
			this->btn_AgregarFR->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->btn_AgregarFR->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_AgregarFR->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_AgregarFR->Location = System::Drawing::Point(25, 158);
			this->btn_AgregarFR->Name = L"btn_AgregarFR";
			this->btn_AgregarFR->Size = System::Drawing::Size(220, 29);
			this->btn_AgregarFR->TabIndex = 5;
			this->btn_AgregarFR->Text = L"Agregar a fila de reproducción";
			this->btn_AgregarFR->UseVisualStyleBackColor = false;
			// 
			// btn_AgregarPL
			// 
			this->btn_AgregarPL->AutoSize = true;
			this->btn_AgregarPL->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btn_AgregarPL->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_AgregarPL->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_AgregarPL->Location = System::Drawing::Point(72, 113);
			this->btn_AgregarPL->Name = L"btn_AgregarPL";
			this->btn_AgregarPL->Size = System::Drawing::Size(134, 29);
			this->btn_AgregarPL->TabIndex = 4;
			this->btn_AgregarPL->Text = L"Agregar a PlayList";
			this->btn_AgregarPL->UseVisualStyleBackColor = false;
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(123, 68);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(144, 23);
			this->txtNombre->TabIndex = 3;
			// 
			// txtArtista
			// 
			this->txtArtista->Location = System::Drawing::Point(123, 32);
			this->txtArtista->Name = L"txtArtista";
			this->txtArtista->Size = System::Drawing::Size(144, 23);
			this->txtArtista->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(22, 68);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 17);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Nombre";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(22, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Artista";
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::Transparent;
			this->groupBox3->Controls->Add(this->btn_Next);
			this->groupBox3->Controls->Add(this->btn_Back);
			this->groupBox3->Controls->Add(this->button1);
			this->groupBox3->Controls->Add(this->btn_Play);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(304, 222);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(236, 212);
			this->groupBox3->TabIndex = 16;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Fila de reproducción";
			// 
			// btn_Next
			// 
			this->btn_Next->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Next.Image")));
			this->btn_Next->Location = System::Drawing::Point(169, 22);
			this->btn_Next->Name = L"btn_Next";
			this->btn_Next->Size = System::Drawing::Size(48, 50);
			this->btn_Next->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btn_Next->TabIndex = 8;
			this->btn_Next->TabStop = false;
			// 
			// btn_Back
			// 
			this->btn_Back->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Back.Image")));
			this->btn_Back->Location = System::Drawing::Point(16, 22);
			this->btn_Back->Name = L"btn_Back";
			this->btn_Back->Size = System::Drawing::Size(48, 48);
			this->btn_Back->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btn_Back->TabIndex = 7;
			this->btn_Back->TabStop = false;
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(16, 131);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(201, 29);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Sincronizar";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// btn_Play
			// 
			this->btn_Play->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Play.Image")));
			this->btn_Play->Location = System::Drawing::Point(91, 22);
			this->btn_Play->Name = L"btn_Play";
			this->btn_Play->Size = System::Drawing::Size(53, 48);
			this->btn_Play->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->btn_Play->TabIndex = 0;
			this->btn_Play->TabStop = false;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::Transparent;
			this->groupBox4->Controls->Add(this->rdb_Nom_OD);
			this->groupBox4->Controls->Add(this->rdb_Nom_OA);
			this->groupBox4->Controls->Add(this->rdb_Art_OD);
			this->groupBox4->Controls->Add(this->rdb_Art_OA);
			this->groupBox4->Controls->Add(this->label3);
			this->groupBox4->Controls->Add(this->label2);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox4->Location = System::Drawing::Point(304, 46);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(236, 156);
			this->groupBox4->TabIndex = 17;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Playlist";
			// 
			// rdb_Nom_OD
			// 
			this->rdb_Nom_OD->AutoSize = true;
			this->rdb_Nom_OD->Location = System::Drawing::Point(130, 125);
			this->rdb_Nom_OD->Name = L"rdb_Nom_OD";
			this->rdb_Nom_OD->Size = System::Drawing::Size(106, 20);
			this->rdb_Nom_OD->TabIndex = 5;
			this->rdb_Nom_OD->TabStop = true;
			this->rdb_Nom_OD->Text = L"Orden Desc.";
			this->rdb_Nom_OD->UseVisualStyleBackColor = true;
			// 
			// rdb_Nom_OA
			// 
			this->rdb_Nom_OA->AutoSize = true;
			this->rdb_Nom_OA->Location = System::Drawing::Point(16, 125);
			this->rdb_Nom_OA->Name = L"rdb_Nom_OA";
			this->rdb_Nom_OA->Size = System::Drawing::Size(99, 20);
			this->rdb_Nom_OA->TabIndex = 4;
			this->rdb_Nom_OA->TabStop = true;
			this->rdb_Nom_OA->Text = L"Orden Asc.";
			this->rdb_Nom_OA->UseVisualStyleBackColor = true;
			// 
			// rdb_Art_OD
			// 
			this->rdb_Art_OD->AutoSize = true;
			this->rdb_Art_OD->Location = System::Drawing::Point(130, 60);
			this->rdb_Art_OD->Name = L"rdb_Art_OD";
			this->rdb_Art_OD->Size = System::Drawing::Size(106, 20);
			this->rdb_Art_OD->TabIndex = 3;
			this->rdb_Art_OD->TabStop = true;
			this->rdb_Art_OD->Text = L"Orden Desc.";
			this->rdb_Art_OD->UseVisualStyleBackColor = true;
			// 
			// rdb_Art_OA
			// 
			this->rdb_Art_OA->AutoSize = true;
			this->rdb_Art_OA->Location = System::Drawing::Point(16, 60);
			this->rdb_Art_OA->Name = L"rdb_Art_OA";
			this->rdb_Art_OA->Size = System::Drawing::Size(99, 20);
			this->rdb_Art_OA->TabIndex = 2;
			this->rdb_Art_OA->TabStop = true;
			this->rdb_Art_OA->Text = L"Orden Asc.";
			this->rdb_Art_OA->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 96);
			this->label3->Name = L"label3";
			this->label3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label3->Size = System::Drawing::Size(60, 16);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Nombre";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 16);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Artista";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(559, 232);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(309, 188);
			this->richTextBox1->TabIndex = 18;
			this->richTextBox1->Text = L"";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(559, 52);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(309, 150);
			this->dataGridView1->TabIndex = 19;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(190)));
			this->ClientSize = System::Drawing::Size(880, 446);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pnlBarra);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->pnlBarra->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_Next))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_Back))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_Play))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
