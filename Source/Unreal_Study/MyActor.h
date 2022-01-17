// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS() //unreal 클래스다
class UNREAL_STUDY_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	//리플렉션? 컴파일로 읽는 주석 같은 것.
	UPROPERTY(VisibleAnywhere) //unreal 프로퍼티다
	UStaticMeshComponent* Mesh;		

	UPROPERTY(EditAnywhere, Category = BattleStat)
	int32 HP;

	UPROPERTY(EditAnywhere, Category = BattleStat)
	int32 MP;

	UPROPERTY(EditAnywhere, Category = BattleStat)
	float RotateSpeed = 30.f;	

};
