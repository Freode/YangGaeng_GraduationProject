// Developed by YangGaeng Team.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstablishBase.generated.h"

UCLASS()
class YANGGAENG_API AEstablishBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstablishBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
