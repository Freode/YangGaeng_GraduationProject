// Developed by YangGaeng Team.


#include "Player/ContentCreatedPawn.h"

// Sets default values
AContentCreatedPawn::AContentCreatedPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AContentCreatedPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AContentCreatedPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AContentCreatedPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

