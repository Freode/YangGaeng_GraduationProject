// Developed by YangGaeng Team.


#include "Player/ContentCreatedPawn.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"

// Sets default values
AContentCreatedPawn::AContentCreatedPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// ===== 계층 =====

	MainScene = CreateDefaultSubobject<USceneComponent>(TEXT("MAIN_SCENE"));
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CAMERA_BOOM"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("FOLLOW_CAMERA"));

	RootComponent = MainScene;
	CameraBoom->SetupAttachment(MainScene);
	Camera->SetupAttachment(CameraBoom);

	CameraBoom->TargetArmLength = 500.0f;
	CameraBoom->SetRelativeRotation(FRotator(-30.0f, 0.0f, 0.0f));

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

	// Input Mapping Context 연결
	if (APlayerController* LocalPlayer = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* InputSystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
		{
			YGLOG_SIMPLE(Warning);
			InputSystem->AddMappingContext(DefaultMappingContext.LoadSynchronous(), 10);
		}
	}

	// Action Binding 설정
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Move
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AContentCreatedPawn::Move);

		// Spin
		EnhancedInputComponent->BindAction(SpinAction, ETriggerEvent::Triggered, this, &AContentCreatedPawn::Spin);

		// Zoom
		EnhancedInputComponent->BindAction(ZoomAction, ETriggerEvent::Triggered, this, &AContentCreatedPawn::Zoom);

		// DragMove

	}

}

// Move Action에 바인딩할 함수
void AContentCreatedPawn::Move(const FInputActionValue& Value)
{
	YGLOG_SIMPLE(Warning);
}

// Spin Action에 바인딩할 함수
void AContentCreatedPawn::Spin(const FInputActionValue& Value)
{

}

// Zoom Action에 바인딩할 함수
void AContentCreatedPawn::Zoom(const FInputActionValue& Value)
{

}