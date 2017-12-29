// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ArduinoSourceCode.generated.h"

UCLASS()
class PROJECTC0M_API AArduinoSourceCode : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AArduinoSourceCode();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "FMovimento"))
		void BP_FMovimento(float forza);
	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "FRotazione"))
		void BP_FRotazione(float forza);

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "FDatiSensori"))
		TArray<float> BP_FDatiSensori();

	UFUNCTION(BlueprintCallable, Category = "CPP_ArduinoSourceCode")
		void CPP_Setup();
	UFUNCTION(BlueprintCallable, Category = "CPP_ArduinoSourceCode")
		void CPP_Loop();

private:
	void ARSetup();
	void ARLoop();

	void MAvanti(float forza);
	void MIndietro(float forza);
	void MSinistra(float forza);
	void MDestra(float forza);

	float SLuce1();
};
