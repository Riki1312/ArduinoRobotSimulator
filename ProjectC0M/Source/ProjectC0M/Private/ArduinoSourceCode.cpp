// Fill out your copyright notice in the Description page of Project Settings.

#include "ArduinoSourceCode.h"
#include "Engine.h"


// Sets default values
AArduinoSourceCode::AArduinoSourceCode()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AArduinoSourceCode::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AArduinoSourceCode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AArduinoSourceCode::CPP_Setup()
{
	ARSetup();
}

void AArduinoSourceCode::CPP_Loop()
{
	ARLoop();
}

//Ricordarsi sempre di passare l'istaza di Robot01 al GestoreArduino. (Altrimenti errore e problema click widget)
//Funzioni Motori
void AArduinoSourceCode::MAvanti(float forza = 50)
{
	this->BP_FMovimento(forza);
}
void AArduinoSourceCode::MIndietro(float forza = 50)
{
	this->BP_FMovimento(-forza);
}
void AArduinoSourceCode::MSinistra(float forza = 50)
{
	this->BP_FRotazione(-forza);
}
void AArduinoSourceCode::MDestra(float forza = 50)
{
	this->BP_FRotazione(forza);
}
//Funzioni Sensori
float AArduinoSourceCode::SLuce1()
{
	TArray<float> SValori = this->BP_FDatiSensori();

	return SValori[0];
}

/*Codice Arduino*/

//Global variable
int cont = 0;

void AArduinoSourceCode::ARSetup()
{
	//Scrivi qui il tuo setup arduino
}
void AArduinoSourceCode::ARLoop()
{
	//Scrivi qui il tuo loop arduino
	cont++;

	MAvanti(300);

	if (SLuce1() > 0)
	{
		MSinistra(600);
		cont = 0;
	}
	FString s1 = FString::SanitizeFloat(SLuce1());

	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Test lettura sensori: " + s1));
}

