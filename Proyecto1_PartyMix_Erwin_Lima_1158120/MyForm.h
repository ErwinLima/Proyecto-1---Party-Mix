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
	private: System::Windows::Forms::Button^ btn_Agregar;
	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::TextBox^ txtArtista;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;

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
			this->btn_Agregar = (gcnew System::Windows::Forms::Button());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtArtista = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->pnlBarra->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// pnlBarra
			// 
			this->pnlBarra->BackColor = System::Drawing::Color::Black;
			this->pnlBarra->Controls->Add(this->pictureBox3);
			this->pnlBarra->Location = System::Drawing::Point(0, 0);
			this->pnlBarra->Name = L"pnlBarra";
			this->pnlBarra->Size = System::Drawing::Size(649, 40);
			this->pnlBarra->TabIndex = 0;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::White;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(611, 0);
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
			this->groupBox2->Controls->Add(this->btn_Agregar);
			this->groupBox2->Controls->Add(this->txtNombre);
			this->groupBox2->Controls->Add(this->txtArtista);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(12, 162);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(275, 145);
			this->groupBox2->TabIndex = 16;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Canciones";
			// 
			// btn_Agregar
			// 
			this->btn_Agregar->AutoSize = true;
			this->btn_Agregar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btn_Agregar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Agregar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Agregar->Location = System::Drawing::Point(85, 106);
			this->btn_Agregar->Name = L"btn_Agregar";
			this->btn_Agregar->Size = System::Drawing::Size(115, 29);
			this->btn_Agregar->TabIndex = 4;
			this->btn_Agregar->Text = L"Agregar";
			this->btn_Agregar->UseVisualStyleBackColor = false;
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
			this->groupBox3->Controls->Add(this->button1);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(12, 329);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(275, 117);
			this->groupBox3->TabIndex = 16;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Controles";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(16, 37);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(91, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Mover";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(190)));
			this->ClientSize = System::Drawing::Size(648, 520);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pnlBarra);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->pnlBarra->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	};
}
