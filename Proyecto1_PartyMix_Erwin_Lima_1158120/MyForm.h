#pragma once
#include "Lista.h";

namespace Proyecto1PartyMixErwinLima1158120 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:	
		//Variables globales
		Lista^ playlist = gcnew Lista();		
		Lista^ fila = gcnew Lista();
		int cantidadColumnas;	
		int posicion;

		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//

			//Se deshabilitan los demás botones
			btn_Save->Enabled = false;
			btn_AgregarFR->Enabled = false;			
			rdb_Art_OA->Enabled = false;
			rdb_Art_OD->Enabled = false;
			rdb_Nom_OA->Enabled = false;
			rdb_Nom_OD->Enabled = false;
			btn_Back->Enabled = false;
			btn_Play_Fila->Enabled = false;
			btn_Random->Enabled = false;
			btn_Play_Playlist->Enabled = false;
			btn_Next->Enabled = false;
			btn_Delete->Enabled = false;
			btn_Sincronizar->Enabled = false;
			btn_Ordenar->Enabled = false;
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
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ListBox^ lstFila;
	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::TextBox^ txtArtista;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::ListBox^ lstPlaylist;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::Button^ btn_AgregarFR;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::PictureBox^ btn_Play_Fila;
	private: System::Windows::Forms::Button^ btn_Ordenar;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ rdb_Nom_OD;
	private: System::Windows::Forms::Label^ lbl_Fila;
	private: System::Windows::Forms::RadioButton^ rdb_Nom_OA;
	private: System::Windows::Forms::Label^ lbl_Playlist;
	private: System::Windows::Forms::PictureBox^ btn_Play_Playlist;
	private: System::Windows::Forms::RadioButton^ rdb_Art_OD;
	private: System::Windows::Forms::RadioButton^ rdb_Art_OA;
	private: System::Windows::Forms::PictureBox^ btn_Next;
	private: System::Windows::Forms::PictureBox^ btn_Back;
	private: System::Windows::Forms::PictureBox^ btn_Delete;
	private: System::Windows::Forms::Button^ btn_Sincronizar;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ btn_Random;











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
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtArtista = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_Random = (gcnew System::Windows::Forms::PictureBox());
			this->btn_Delete = (gcnew System::Windows::Forms::PictureBox());
			this->lbl_Fila = (gcnew System::Windows::Forms::Label());
			this->btn_Next = (gcnew System::Windows::Forms::PictureBox());
			this->btn_Back = (gcnew System::Windows::Forms::PictureBox());
			this->btn_Sincronizar = (gcnew System::Windows::Forms::Button());
			this->btn_Play_Fila = (gcnew System::Windows::Forms::PictureBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_Ordenar = (gcnew System::Windows::Forms::Button());
			this->lbl_Playlist = (gcnew System::Windows::Forms::Label());
			this->btn_Play_Playlist = (gcnew System::Windows::Forms::PictureBox());
			this->rdb_Nom_OD = (gcnew System::Windows::Forms::RadioButton());
			this->rdb_Nom_OA = (gcnew System::Windows::Forms::RadioButton());
			this->rdb_Art_OD = (gcnew System::Windows::Forms::RadioButton());
			this->rdb_Art_OA = (gcnew System::Windows::Forms::RadioButton());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lstFila = (gcnew System::Windows::Forms::ListBox());
			this->lstPlaylist = (gcnew System::Windows::Forms::ListBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pnlBarra->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_Random))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_Delete))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_Next))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_Back))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_Play_Fila))->BeginInit();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_Play_Playlist))->BeginInit();
			this->SuspendLayout();
			// 
			// pnlBarra
			// 
			this->pnlBarra->BackColor = System::Drawing::Color::Black;
			this->pnlBarra->Controls->Add(this->pictureBox3);
			this->pnlBarra->Location = System::Drawing::Point(0, 0);
			this->pnlBarra->Name = L"pnlBarra";
			this->pnlBarra->Size = System::Drawing::Size(1018, 40);
			this->pnlBarra->TabIndex = 0;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::White;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(982, 0);
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
			this->btn_Save->Click += gcnew System::EventHandler(this, &MyForm::btn_Save_Click);
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
			this->btn_Open->Click += gcnew System::EventHandler(this, &MyForm::btn_Open_Click);
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
			this->groupBox2->Controls->Add(this->txtNombre);
			this->groupBox2->Controls->Add(this->txtArtista);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(12, 162);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(275, 198);
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
			this->btn_AgregarFR->Location = System::Drawing::Point(21, 123);
			this->btn_AgregarFR->Name = L"btn_AgregarFR";
			this->btn_AgregarFR->Size = System::Drawing::Size(220, 29);
			this->btn_AgregarFR->TabIndex = 5;
			this->btn_AgregarFR->Text = L"Agregar a fila de reproducción";
			this->btn_AgregarFR->UseVisualStyleBackColor = false;
			this->btn_AgregarFR->Click += gcnew System::EventHandler(this, &MyForm::btn_AgregarFR_Click);
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
			this->groupBox3->Controls->Add(this->btn_Random);
			this->groupBox3->Controls->Add(this->btn_Delete);
			this->groupBox3->Controls->Add(this->lbl_Fila);
			this->groupBox3->Controls->Add(this->btn_Next);
			this->groupBox3->Controls->Add(this->btn_Back);
			this->groupBox3->Controls->Add(this->btn_Sincronizar);
			this->groupBox3->Controls->Add(this->btn_Play_Fila);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(12, 370);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(373, 171);
			this->groupBox3->TabIndex = 16;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Fila de reproducción";
			// 
			// btn_Random
			// 
			this->btn_Random->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Random.Image")));
			this->btn_Random->Location = System::Drawing::Point(174, 66);
			this->btn_Random->Name = L"btn_Random";
			this->btn_Random->Size = System::Drawing::Size(53, 48);
			this->btn_Random->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->btn_Random->TabIndex = 12;
			this->btn_Random->TabStop = false;
			this->btn_Random->Click += gcnew System::EventHandler(this, &MyForm::btn_Random_Click);
			// 
			// btn_Delete
			// 
			this->btn_Delete->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Delete.Image")));
			this->btn_Delete->Location = System::Drawing::Point(242, 66);
			this->btn_Delete->Name = L"btn_Delete";
			this->btn_Delete->Size = System::Drawing::Size(48, 50);
			this->btn_Delete->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btn_Delete->TabIndex = 11;
			this->btn_Delete->TabStop = false;
			this->btn_Delete->Click += gcnew System::EventHandler(this, &MyForm::btn_Delete_Click);
			// 
			// lbl_Fila
			// 
			this->lbl_Fila->AutoSize = true;
			this->lbl_Fila->Location = System::Drawing::Point(18, 31);
			this->lbl_Fila->Name = L"lbl_Fila";
			this->lbl_Fila->Size = System::Drawing::Size(125, 16);
			this->lbl_Fila->TabIndex = 10;
			this->lbl_Fila->Text = L"¡Pon una canción!";
			// 
			// btn_Next
			// 
			this->btn_Next->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Next.Image")));
			this->btn_Next->Location = System::Drawing::Point(306, 68);
			this->btn_Next->Name = L"btn_Next";
			this->btn_Next->Size = System::Drawing::Size(48, 50);
			this->btn_Next->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btn_Next->TabIndex = 8;
			this->btn_Next->TabStop = false;
			this->btn_Next->Click += gcnew System::EventHandler(this, &MyForm::btn_Next_Click);
			// 
			// btn_Back
			// 
			this->btn_Back->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Back.Image")));
			this->btn_Back->Location = System::Drawing::Point(31, 66);
			this->btn_Back->Name = L"btn_Back";
			this->btn_Back->Size = System::Drawing::Size(48, 48);
			this->btn_Back->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btn_Back->TabIndex = 7;
			this->btn_Back->TabStop = false;
			this->btn_Back->Click += gcnew System::EventHandler(this, &MyForm::btn_Back_Click);
			// 
			// btn_Sincronizar
			// 
			this->btn_Sincronizar->AutoSize = true;
			this->btn_Sincronizar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->btn_Sincronizar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Sincronizar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Sincronizar->Location = System::Drawing::Point(89, 122);
			this->btn_Sincronizar->Name = L"btn_Sincronizar";
			this->btn_Sincronizar->Size = System::Drawing::Size(201, 29);
			this->btn_Sincronizar->TabIndex = 6;
			this->btn_Sincronizar->Text = L"Sincronizar";
			this->btn_Sincronizar->UseVisualStyleBackColor = false;
			this->btn_Sincronizar->Click += gcnew System::EventHandler(this, &MyForm::btn_Sincronizar_Click);
			// 
			// btn_Play_Fila
			// 
			this->btn_Play_Fila->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Play_Fila.Image")));
			this->btn_Play_Fila->Location = System::Drawing::Point(106, 66);
			this->btn_Play_Fila->Name = L"btn_Play_Fila";
			this->btn_Play_Fila->Size = System::Drawing::Size(53, 48);
			this->btn_Play_Fila->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->btn_Play_Fila->TabIndex = 0;
			this->btn_Play_Fila->TabStop = false;
			this->btn_Play_Fila->Click += gcnew System::EventHandler(this, &MyForm::btn_Play_Fila_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::Transparent;
			this->groupBox4->Controls->Add(this->btn_Ordenar);
			this->groupBox4->Controls->Add(this->lbl_Playlist);
			this->groupBox4->Controls->Add(this->btn_Play_Playlist);
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
			this->groupBox4->Size = System::Drawing::Size(303, 314);
			this->groupBox4->TabIndex = 17;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Playlist";
			// 
			// btn_Ordenar
			// 
			this->btn_Ordenar->AutoSize = true;
			this->btn_Ordenar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btn_Ordenar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Ordenar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Ordenar->Location = System::Drawing::Point(79, 161);
			this->btn_Ordenar->Name = L"btn_Ordenar";
			this->btn_Ordenar->Size = System::Drawing::Size(134, 29);
			this->btn_Ordenar->TabIndex = 14;
			this->btn_Ordenar->Text = L"Ordenar";
			this->btn_Ordenar->UseVisualStyleBackColor = false;
			this->btn_Ordenar->Click += gcnew System::EventHandler(this, &MyForm::btn_Ordenar_Click);
			// 
			// lbl_Playlist
			// 
			this->lbl_Playlist->AutoSize = true;
			this->lbl_Playlist->Location = System::Drawing::Point(7, 207);
			this->lbl_Playlist->Name = L"lbl_Playlist";
			this->lbl_Playlist->Size = System::Drawing::Size(125, 16);
			this->lbl_Playlist->TabIndex = 13;
			this->lbl_Playlist->Text = L"¡Pon una canción!";
			// 
			// btn_Play_Playlist
			// 
			this->btn_Play_Playlist->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Play_Playlist.Image")));
			this->btn_Play_Playlist->Location = System::Drawing::Point(133, 239);
			this->btn_Play_Playlist->Name = L"btn_Play_Playlist";
			this->btn_Play_Playlist->Size = System::Drawing::Size(53, 48);
			this->btn_Play_Playlist->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->btn_Play_Playlist->TabIndex = 12;
			this->btn_Play_Playlist->TabStop = false;
			this->btn_Play_Playlist->Click += gcnew System::EventHandler(this, &MyForm::btn_Play_Playlist_Click);
			// 
			// rdb_Nom_OD
			// 
			this->rdb_Nom_OD->AutoSize = true;
			this->rdb_Nom_OD->Location = System::Drawing::Point(151, 120);
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
			this->rdb_Nom_OA->Location = System::Drawing::Point(10, 120);
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
			this->rdb_Art_OD->Location = System::Drawing::Point(151, 55);
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
			this->rdb_Art_OA->Location = System::Drawing::Point(10, 55);
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
			this->label3->Location = System::Drawing::Point(7, 91);
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
			this->label2->Location = System::Drawing::Point(7, 27);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 16);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Artista";
			// 
			// lstFila
			// 
			this->lstFila->FormattingEnabled = true;
			this->lstFila->Location = System::Drawing::Point(835, 91);
			this->lstFila->Name = L"lstFila";
			this->lstFila->Size = System::Drawing::Size(170, 446);
			this->lstFila->TabIndex = 20;
			// 
			// lstPlaylist
			// 
			this->lstPlaylist->FormattingEnabled = true;
			this->lstPlaylist->Location = System::Drawing::Point(633, 91);
			this->lstPlaylist->Name = L"lstPlaylist";
			this->lstPlaylist->Size = System::Drawing::Size(173, 446);
			this->lstPlaylist->TabIndex = 21;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(687, 62);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 16);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Playlist";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(842, 62);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(144, 16);
			this->label6->TabIndex = 23;
			this->label6->Text = L"Fila de reproducción";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(190)));
			this->ClientSize = System::Drawing::Size(1017, 553);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->lstPlaylist);
			this->Controls->Add(this->lstFila);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_Random))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_Delete))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_Next))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_Back))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_Play_Fila))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_Play_Playlist))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//Métodos y funciones
		void Swap(Nodo^ nodo1, Nodo^ nodo2) {//Intercambia los valores de los nodos
			String^ name = nodo1->nombre;
			String^ artista = nodo1->artista;
			//Intercambio de nombre
			nodo1->nombre = nodo2->nombre;
			nodo2->nombre = name;
			//Intercambio de artista
			nodo1->artista = nodo2->artista;
			nodo2->artista = artista;
		}
		
		void BubbleSort(Lista^ lst) {//Ordena la playlist
			int swapped;//Variable que indica si se realizo un intercambio
			Nodo^ izquierda;
			Nodo^ derecha = lst->end->sig;
			do
			{
				swapped = 0;
				izquierda = lst->head;
				while (izquierda->sig != derecha)
				{
					if (rdb_Art_OA->Checked)//Orden ascendente artista
					{
						if (izquierda->artista[0] > izquierda->sig->artista[0])
						{
							Swap(izquierda, izquierda->sig);
							swapped = 1;
						}
						if (izquierda->artista == "desconocido")//Si el dato es desconocido se envía hasta el final
						{
							Swap(izquierda, izquierda->sig);
							swapped = 1;
						}
						izquierda = izquierda->sig;
					}
					else if (rdb_Art_OD->Checked)//Orden descendente artista
					{
						if (izquierda->artista[0] < izquierda->sig->artista[0])
						{
							Swap(izquierda->sig, izquierda);
							swapped = 1;
						}
						if (izquierda->artista == "desconocido")
						{
							Swap(izquierda, izquierda->sig);
							swapped = 1;
						}
						izquierda = izquierda->sig;
					}
					else if (rdb_Nom_OA->Checked)//Orden ascendente nombre
					{
						if (izquierda->nombre[0] > izquierda->sig->nombre[0])
						{
							Swap(izquierda->sig, izquierda);
							swapped = 1;
						}
						izquierda = izquierda->sig;
					}
					else if (rdb_Nom_OD->Checked)//Orden descendente nombre
					{
						if (izquierda->nombre[0] < izquierda->sig->nombre[0])
						{
							Swap(izquierda->sig, izquierda);
							swapped = 1;
						}
						izquierda = izquierda->sig;//Se pasa al siguiente elemento
					}
				}
				derecha = izquierda;
			} while (swapped);
		}

		void Sincronizar() {
			while (!fila->IsEmpty())//Mientras la fila de reproducción no este vacía va a repetir el proceso
			{
				//Se extrae el nombre y el artista en la primera posición
				String^ name = fila->GetNombre(0);
				String^ art = fila->GetArtista(0);
				playlist->Add(art, name);//Se añaden a la playlist
				fila->RemoveAtStart();//Se remueven los datos al inicio de la fila de reproducción
			}
			//Si alguno de los radio buttons esta seleccionado, la playlist se va a ordenar automáticamente
			if (rdb_Art_OA->Checked || rdb_Art_OD->Checked || rdb_Nom_OA->Checked || rdb_Nom_OD->Checked)
			{
				BubbleSort(playlist);
			}			
		}
		
		void LlenarListBox(ListBox^ lst, Lista^ list) {			
			Nodo^ temp = list->head;//Nodo que apunta a la cabeza de la lista			
			lst->Items->Clear();//Se limpia el listBox			
			while (temp != nullptr)
			{				
				String^ info = temp->nombre + "-" + temp->artista;//Se guardan los datos en un string
				lst->Items->Add(info);//Se añade el string al listBox
				temp = temp->sig;//Se avanza al siguiente nodo
			}
		}				

	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	};
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	};
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
};
private: System::Void btn_Open_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		//Se crea un filtro para añadir los archivos
		openFileDialog1->Filter = "Archivos separados por coma (csv) | *.csv";
		openFileDialog1->FileName = "";
		//Se verifica que se pudo abrir el archivo
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			txtPath->Text = openFileDialog1->FileName;
			
			array<String^>^ archivoLineas = File::ReadAllLines(openFileDialog1->FileName);
			if (archivoLineas->Length > 0) {
				for (int i = 0; i < archivoLineas->Length; i++)
				{
					array<String^>^ Columna = archivoLineas[i]->Split(',');
					for (int j = 0; j < Columna->Length; j++)
					{
						if (Columna[j] != "") {//Si el campo está vacío no se toma en cuenta
							array<String^>^ cancion = Columna[j]->Split('-');
							if (cancion[0] != "")//Se verifica que haya nombre de la canción
							{
								if (cancion[1] == "")//Se verifica si hay artista
								{
									playlist->Add("desconocido", cancion[0]);//Se envía "desconocido" si no hay artista
								}
								else {
									playlist->Add(cancion[1], cancion[0]);
								}
							}
							else {
								j = Columna->Length;
								i = archivoLineas->Length;
								MessageBox::Show("Nombre de canción no válido",
									"Error",
									MessageBoxButtons::OK,
									MessageBoxIcon::Warning);
							}
						}
					}
				}
				//Se habilitan todos los botones
				btn_Save->Enabled = true;
				btn_AgregarFR->Enabled = true;				
				rdb_Art_OA->Enabled = true;
				rdb_Art_OD->Enabled = true;
				rdb_Nom_OA->Enabled = true;
				rdb_Nom_OD->Enabled = true;
				btn_Back->Enabled = true;
				btn_Play_Fila->Enabled = true;
				btn_Random->Enabled = true;
				btn_Play_Playlist->Enabled = true;
				btn_Next->Enabled = true;
				btn_Delete->Enabled = true;
				btn_Sincronizar->Enabled = true;
				btn_Ordenar->Enabled = true;
				LlenarListBox(lstPlaylist, playlist);
				//Se toma la primera fila del archivo y con este se definen el tamaño de la columna
				array<String^>^ archivoColumna = archivoLineas[0]->Split(',');
				if (archivoColumna->Length > 0) {
					cantidadColumnas = archivoColumna->Length;
				}
			}
		}
		else {
			MessageBox::Show("No se seleccionó ningún archivo",
				"Archivo no seleccionado",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("No se pudo abrir el archivo",
			"Archivo no seleccionado",
			MessageBoxButtons::OK,
			MessageBoxIcon::Error);
	}
};

private: System::Void btn_AgregarFR_Click(System::Object^ sender, System::EventArgs^ e) {		
	String^ nombre = txtNombre->Text;
	String^ artista = txtArtista->Text;
	if (nombre == "")//Verifica si el campo nombre esta vacío
	{
		MessageBox::Show("Nombre de canción no válido",
			"Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Exclamation);
	}
	else {
		if (artista == "")
		{
			//Si el campo artista esta vacío, se colocará la opción desconocido
			fila->Add("desconocido", nombre);
		}
		else {
			fila->Add(artista, nombre);
		}
	}
	LlenarListBox(lstFila, fila);
}

private: System::Void btn_Save_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (!playlist->IsEmpty())//Se verifica que la playlist no este vacía
		{
			saveFileDialog1->Filter = "Archivos separados por coma (csv) | *.csv";//Se crea el filtro para guardar los archivos
			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				int i = 0;//Variable que servirá para recorrer la playlist
				String^ lineas = "";//Todos los datos se guardarán en una sola fila.
				int j = 0;//Variable que servirá para crear nuevas filas
				while (i < playlist->Count())
				{
					if (j < cantidadColumnas - 1)
					{
						lineas += "" + playlist->GetNombre(i) + "-" + playlist->GetArtista(i) + ",";
					}
					else {//Si j es igual a la cantidad de columnas del archivo original saltará a la siguiente fila
						lineas += "" + playlist->GetNombre(i) + "-" + playlist->GetArtista(i) + "\r\n";
						j = 0;
					}
					j++;
					i++;
				}
				//Se escribe el archivo con el nombre indicado y con los elementos.
				File::WriteAllText(saveFileDialog1->FileName, lineas);
				MessageBox::Show("Archivo guardado exitosamente"
					, "Operación exitosa"
					, MessageBoxButtons::OK
					, MessageBoxIcon::Information);
			}
		}
		else {
			MessageBox::Show("La playlist esta vacia",
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Exclamation);
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("No se pudo guardar el archivo"
			, "Archivo no seleccionado"
			, MessageBoxButtons::OK
			, MessageBoxIcon::Information);
	}
}
private: System::Void btn_Play_Playlist_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!playlist->IsEmpty())//Se verifica que la playlist no este vacía
	{
		//Se guardan los datos nombre y artista
		String^ nombre = playlist->GetNombre(0);
		String^ artista = playlist->GetArtista(0);
		//Se cambia el contenido de la label
		lbl_Playlist->Text = "Reproduciendo: " + nombre + "-" + artista;
		//Se remueven los elementos
		playlist->RemoveAtStart();
		//Se actualiza la listbox
		LlenarListBox(lstPlaylist, playlist);
	}
	else {
		if (!fila->IsEmpty())
		{
			//Si la playlist llega a estar vacía se sincroniza con la fila de reproducción
			Sincronizar();
			LlenarListBox(lstPlaylist, playlist);
			LlenarListBox(lstFila, fila);
		}
		else {
			lbl_Playlist->Text = "¡Pon una canción!";
			MessageBox::Show("La playlist y la fila de reproducción estan vacías",
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Exclamation);
		}
	}
}
private: System::Void btn_Back_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!fila->IsEmpty())
	{
		posicion--;
		if (posicion < 0)
		{
			//Se cambia el valor de la posición por el de la cantidad de elementos, va al final
			posicion = fila->Count() - 1;
		}
		String^ mensaje = "Previsualizando: " + fila->GetNombre(posicion) + "-" + fila->GetArtista(posicion);
		lbl_Fila->Text = mensaje;
	}
	else {
		MessageBox::Show("La fila de reproducción esta vacia",
			"Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Exclamation);
	}
}
private: System::Void btn_Next_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!fila->IsEmpty())
	{
		posicion++;
		if (posicion > fila->Count() - 1)
		{
			//Se cambia el valor a 0, vuelve al inicio
			posicion = 0;
		}
		String^ mensaje = "Previsualizando: " + fila->GetNombre(posicion) + "-" + fila->GetArtista(posicion);
		lbl_Fila->Text = mensaje;
	}
	else {
		MessageBox::Show("La fila de reproducción esta vacia",
			"Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Exclamation);
	}
}
private: System::Void btn_Delete_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!fila->IsEmpty())
	{
		//Se remueve el elemento en la posición indicada
		fila->RemoveAt(posicion);
		LlenarListBox(lstFila, fila);
		lbl_Fila->Text = "";
	}
	else {
		MessageBox::Show("La fila de reproducción esta vacia",
			"Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Exclamation);
	}
}
private: System::Void btn_Play_Fila_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!fila->IsEmpty())
	{
		String^ nombre = fila->GetNombre(posicion);
		String^ artista = fila->GetArtista(posicion);
		lbl_Fila->Text = "Reproduciendo: " + nombre + "-" + artista;
		fila->RemoveAt(posicion);
		LlenarListBox(lstFila, fila);
	}
	else {
		lbl_Fila->Text = "¡Pon una canción!";
		MessageBox::Show("La fila de reproducción esta vacia",
			"Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Exclamation);
	}
}
private: System::Void btn_Ordenar_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (rdb_Art_OA->Checked || rdb_Art_OD->Checked || rdb_Nom_OA->Checked || rdb_Nom_OD->Checked)
		{
			//Se verifica que se haya seleccionado una opción de ordenamiento.
			BubbleSort(playlist);
			LlenarListBox(lstPlaylist, playlist);
		}
		else {
			MessageBox::Show("No se seleccionó ninguna opción para ordenar.",
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Exclamation);
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Ocurrió un error al ordenar la playlist",
			"Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Exclamation);
	}	
}
private: System::Void btn_Sincronizar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!fila->IsEmpty())
	{
		Sincronizar();
		LlenarListBox(lstPlaylist, playlist);
		LlenarListBox(lstFila, fila);
	}
	else {
		MessageBox::Show("La fila de reproducción esta vacia",
			"Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Exclamation);
	}
}
private: System::Void btn_Random_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!fila->IsEmpty())
	{
		Random^ rdm = gcnew Random();
		//Se crea un número aleatorio.
		int i = rdm->Next(0, fila->Count() - 1);
		//Se extraen los datos en la posición aleatoria
		String^ nombre = fila->GetNombre(i);
		String^ artista = fila->GetArtista(i);
		//Se cambia el valor de la label
		lbl_Fila->Text = "Reproduciendo: " + nombre + "-" + artista;
		//se remueven los elementos.
		fila->RemoveAt(i);
		LlenarListBox(lstFila, fila);
	}
	else {
		MessageBox::Show("La fila de reproducción esta vacia",
			"Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Exclamation);
	}
}
};
}
