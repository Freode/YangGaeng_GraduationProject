// Developed by YangGaeng Team.


#include "InteractBase.h"

// Sets default values
AInteractBase::AInteractBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// ===== 계층 =====

	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("SCENE"));
	SM_Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM_MESH"));
	SK_Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SK_MESH"));
	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("BOX"));

	RootComponent = Scene;
	SM_Mesh->SetupAttachment(Scene);
	SK_Mesh->SetupAttachment(Scene);
	Box->SetupAttachment(Scene);

}

// Called when the game starts or when spawned
void AInteractBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInteractBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

