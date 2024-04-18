use PeakShift;

create table "User"(
UserID int,
Username varchar(30) not null,
Gender char(1) not null,
Age int not null,
Email varchar(30) not null,
Password varchar(30) not null,
Active bit not null,
Frozen bit not null,
ForzenLength int,
constraint User_pk primary key (UserId)
);

create table Payments (
    PaymentID int,
    PaymentDate date not null,
    PaymentAmount decimal(10, 2) not null,
    PaymentMethod varchar(20) not null,
    PaymentStatus varchar(20) not null,
    TransactionID int not null,
    BillingAddress varchar(100) not null,
	ForzenLength int,
	UserID int not null,
	constraint Payments_pk primary key (PaymentID),
	constraint Payments_fk foreign key (UserID) references "User" (UserID)
);
	
create table HealthAssessment (
    UserID int,
    AssessmentID int,
    HealthConcerns varchar(100),
    BMI decimal(5, 2),
    BFP decimal(5, 2),
    BMP decimal(5, 2),
    BMR decimal(8, 2),
    Height decimal(5, 2),
    Weight decimal(5, 2),
	Date date,
    FitnessGoals varchar(100),
    constraint HealthAssessment_pk primary key (UserID, AssessmentID),
    constraint HealthAssessment_fk foreign key (UserID) references "User"(UserID)
);

create table Workouts (
    WorkoutID int,
	CaloriesBurned decimal(8, 2),
    Date date,
    WorkoutType varchar(30),
    Duration int,
    Sets int,
    Reps int,
	constraint Workouts_pk primary key (WorkoutID)
);


create table Coach (
	UserID int,
    CoachID int,
    CoachName varchar(30) not null,
    StartDate int not null,
    Active bit not null,
    Salary decimal(10, 2) not null,
    Email varchar(30) not null,
    Password varchar(30) not null,
    Age int not null,
    Gender char(1) not null,
    constraint Coach_pk primary key (CoachID),
    constraint Coach_fk foreign key (UserID) references "User"(UserID)
);

create table NutritionPlan (
    UserID int,
    PlanName varchar(30),
	CoachID int,
    StartDate date,
    EndDate date,
    TotalCaloriesPerDay int,
    ProteinGramsPerDay decimal(8, 2),
    CarbGramsPerDay decimal(8, 2),
    FatGramsPerDay decimal(8, 2),
    WaterLitersPerDay decimal(5, 2),
    constraint NutritionPlan_pk primary key (UserID, PlanName, CoachID),
    constraint NutritionPlan_fk_u foreign key (UserID) references "User"(UserID),
	constraint NutritionPlan_fk_c foreign key (CoachID) references Coach(CoachID)
);

create table ExercisePlan (
    UserID int,
    CoachID int,
    ExerciseDate date,
    TargetedMuscleGroup varchar(50),
    constraint ExercisePlan_pk primary key (UserID, ExerciseDate, CoachID),
    constraint ExercisePlan_fk_u foreign key (UserID) references "User"(UserID),
	constraint ExercisePlan_fk_c foreign key (CoachID) references Coach(CoachID)
);

create table Planincludes (
    UserID int,
    ExerciseDate date,
	CoachID int,
    WorkoutID int,
    constraint Planincludes_pk primary key (UserID, ExerciseDate, CoachID, WorkoutID),
    constraint Planincludes_fk_e foreign key (UserID, ExerciseDate, CoachID) references ExercisePlan (UserID, ExerciseDate, CoachID),
    constraint Planincludes_fk_w foreign key (WorkoutID) references Workouts (WorkoutID)
);

create table DailyMetrics (
    UserID int,
    Date date,
	SleepHours decimal(4, 2),
    CaloriesConsumed decimal(8, 2),
    CaloriesBurned decimal(8, 2),
	BloodPressure int,
    HeartRate int,
	StepsTaken int,
    constraint DailyMetrics_pk primary key (UserID, Date),
    constraint DailyMetrics_fk foreign key (UserID) references "User"(UserID)
);

create table Machines (
    MachineID int,
    MachineName varchar(30),
    Description varchar(100),
	WorkoutID int,
    constraint Machines_pk primary key (MachineID),
    constraint Machines_fk foreign key (WorkoutID) references Workouts(WorkoutID)
);


create table Uses (
	MachineID int,
	UserID int,
    constraint Uses_pk primary key (UserID, MachineID),
    constraint Uses_fk_u foreign key (UserID) references "User"(UserID),
	constraint Uses_fk_m foreign key (MachineID) references Machines(MachineID)
);