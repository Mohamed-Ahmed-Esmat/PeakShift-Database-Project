USE [master]
GO
/****** Object:  Database [PeakShift]    Script Date: 4/24/2024 11:43:47 PM ******/
CREATE DATABASE [PeakShift]
 CONTAINMENT = NONE
 ON  PRIMARY 
( NAME = N'PeakShift', FILENAME = N'D:\MSSQL16.MSSQLSERVER\MSSQL\DATA\PeakShift.mdf' , SIZE = 8192KB , MAXSIZE = UNLIMITED, FILEGROWTH = 65536KB )
 LOG ON 
( NAME = N'PeakShift_log', FILENAME = N'D:\MSSQL16.MSSQLSERVER\MSSQL\DATA\PeakShift_log.ldf' , SIZE = 8192KB , MAXSIZE = 2048GB , FILEGROWTH = 65536KB )
 WITH CATALOG_COLLATION = DATABASE_DEFAULT, LEDGER = OFF
GO
ALTER DATABASE [PeakShift] SET COMPATIBILITY_LEVEL = 160
GO
IF (1 = FULLTEXTSERVICEPROPERTY('IsFullTextInstalled'))
begin
EXEC [PeakShift].[dbo].[sp_fulltext_database] @action = 'enable'
end
GO
ALTER DATABASE [PeakShift] SET ANSI_NULL_DEFAULT OFF 
GO
ALTER DATABASE [PeakShift] SET ANSI_NULLS OFF 
GO
ALTER DATABASE [PeakShift] SET ANSI_PADDING OFF 
GO
ALTER DATABASE [PeakShift] SET ANSI_WARNINGS OFF 
GO
ALTER DATABASE [PeakShift] SET ARITHABORT OFF 
GO
ALTER DATABASE [PeakShift] SET AUTO_CLOSE OFF 
GO
ALTER DATABASE [PeakShift] SET AUTO_SHRINK OFF 
GO
ALTER DATABASE [PeakShift] SET AUTO_UPDATE_STATISTICS ON 
GO
ALTER DATABASE [PeakShift] SET CURSOR_CLOSE_ON_COMMIT OFF 
GO
ALTER DATABASE [PeakShift] SET CURSOR_DEFAULT  GLOBAL 
GO
ALTER DATABASE [PeakShift] SET CONCAT_NULL_YIELDS_NULL OFF 
GO
ALTER DATABASE [PeakShift] SET NUMERIC_ROUNDABORT OFF 
GO
ALTER DATABASE [PeakShift] SET QUOTED_IDENTIFIER OFF 
GO
ALTER DATABASE [PeakShift] SET RECURSIVE_TRIGGERS OFF 
GO
ALTER DATABASE [PeakShift] SET  DISABLE_BROKER 
GO
ALTER DATABASE [PeakShift] SET AUTO_UPDATE_STATISTICS_ASYNC OFF 
GO
ALTER DATABASE [PeakShift] SET DATE_CORRELATION_OPTIMIZATION OFF 
GO
ALTER DATABASE [PeakShift] SET TRUSTWORTHY OFF 
GO
ALTER DATABASE [PeakShift] SET ALLOW_SNAPSHOT_ISOLATION OFF 
GO
ALTER DATABASE [PeakShift] SET PARAMETERIZATION SIMPLE 
GO
ALTER DATABASE [PeakShift] SET READ_COMMITTED_SNAPSHOT OFF 
GO
ALTER DATABASE [PeakShift] SET HONOR_BROKER_PRIORITY OFF 
GO
ALTER DATABASE [PeakShift] SET RECOVERY FULL 
GO
ALTER DATABASE [PeakShift] SET  MULTI_USER 
GO
ALTER DATABASE [PeakShift] SET PAGE_VERIFY CHECKSUM  
GO
ALTER DATABASE [PeakShift] SET DB_CHAINING OFF 
GO
ALTER DATABASE [PeakShift] SET FILESTREAM( NON_TRANSACTED_ACCESS = OFF ) 
GO
ALTER DATABASE [PeakShift] SET TARGET_RECOVERY_TIME = 60 SECONDS 
GO
ALTER DATABASE [PeakShift] SET DELAYED_DURABILITY = DISABLED 
GO
ALTER DATABASE [PeakShift] SET ACCELERATED_DATABASE_RECOVERY = OFF  
GO
EXEC sys.sp_db_vardecimal_storage_format N'PeakShift', N'ON'
GO
ALTER DATABASE [PeakShift] SET QUERY_STORE = ON
GO
ALTER DATABASE [PeakShift] SET QUERY_STORE (OPERATION_MODE = READ_WRITE, CLEANUP_POLICY = (STALE_QUERY_THRESHOLD_DAYS = 30), DATA_FLUSH_INTERVAL_SECONDS = 900, INTERVAL_LENGTH_MINUTES = 60, MAX_STORAGE_SIZE_MB = 1000, QUERY_CAPTURE_MODE = AUTO, SIZE_BASED_CLEANUP_MODE = AUTO, MAX_PLANS_PER_QUERY = 200, WAIT_STATS_CAPTURE_MODE = ON)
GO
USE [PeakShift]
GO
/****** Object:  Table [dbo].[Coach]    Script Date: 4/24/2024 11:43:47 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Coach](
	[UserID] [int] NULL,
	[CoachID] [int] NOT NULL,
	[CoachName] [varchar](30) NOT NULL,
	[StartDate] [int] NOT NULL,
	[Active] [bit] NOT NULL,
	[Salary] [decimal](10, 2) NOT NULL,
	[Email] [varchar](30) NOT NULL,
	[Password] [varchar](30) NOT NULL,
	[Age] [int] NOT NULL,
	[Gender] [char](1) NOT NULL,
 CONSTRAINT [Coach_pk] PRIMARY KEY CLUSTERED 
(
	[CoachID] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[DailyMetrics]    Script Date: 4/24/2024 11:43:47 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[DailyMetrics](
	[UserID] [int] NOT NULL,
	[Date] [date] NOT NULL,
	[SleepHours] [decimal](4, 2) NULL,
	[CaloriesConsumed] [decimal](8, 2) NULL,
	[CaloriesBurned] [decimal](8, 2) NULL,
	[BloodPressure] [int] NULL,
	[HeartRate] [int] NULL,
	[StepsTaken] [int] NULL,
 CONSTRAINT [DailyMetrics_pk] PRIMARY KEY CLUSTERED 
(
	[UserID] ASC,
	[Date] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[ExercisePlan]    Script Date: 4/24/2024 11:43:47 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[ExercisePlan](
	[UserID] [int] NOT NULL,
	[CoachID] [int] NOT NULL,
	[ExerciseDate] [date] NOT NULL,
	[TargetedMuscleGroup] [varchar](50) NULL,
 CONSTRAINT [ExercisePlan_pk] PRIMARY KEY CLUSTERED 
(
	[UserID] ASC,
	[ExerciseDate] ASC,
	[CoachID] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[HealthAssessment]    Script Date: 4/24/2024 11:43:47 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[HealthAssessment](
	[UserID] [int] NOT NULL,
	[AssessmentID] [int] NOT NULL,
	[HealthConcerns] [varchar](100) NULL,
	[BMI] [decimal](5, 2) NULL,
	[BFP] [decimal](5, 2) NULL,
	[BMP] [decimal](5, 2) NULL,
	[BMR] [decimal](8, 2) NULL,
	[Height] [decimal](5, 2) NULL,
	[Weight] [decimal](5, 2) NULL,
	[Date] [date] NULL,
	[FitnessGoals] [varchar](100) NULL,
 CONSTRAINT [HealthAssessment_pk] PRIMARY KEY CLUSTERED 
(
	[UserID] ASC,
	[AssessmentID] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Machines]    Script Date: 4/24/2024 11:43:47 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Machines](
	[MachineID] [int] NOT NULL,
	[MachineName] [varchar](30) NULL,
	[Description] [varchar](100) NULL,
	[WorkoutID] [int] NULL,
 CONSTRAINT [Machines_pk] PRIMARY KEY CLUSTERED 
(
	[MachineID] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[NutritionPlan]    Script Date: 4/24/2024 11:43:47 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[NutritionPlan](
	[UserID] [int] NOT NULL,
	[PlanName] [varchar](30) NOT NULL,
	[CoachID] [int] NOT NULL,
	[StartDate] [date] NULL,
	[EndDate] [date] NULL,
	[TotalCaloriesPerDay] [int] NULL,
	[ProteinGramsPerDay] [decimal](8, 2) NULL,
	[CarbGramsPerDay] [decimal](8, 2) NULL,
	[FatGramsPerDay] [decimal](8, 2) NULL,
	[WaterLitersPerDay] [decimal](5, 2) NULL,
 CONSTRAINT [NutritionPlan_pk] PRIMARY KEY CLUSTERED 
(
	[UserID] ASC,
	[PlanName] ASC,
	[CoachID] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Payments]    Script Date: 4/24/2024 11:43:47 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Payments](
	[PaymentID] [int] NOT NULL,
	[PaymentDate] [date] NOT NULL,
	[PaymentAmount] [decimal](10, 2) NOT NULL,
	[PaymentMethod] [varchar](20) NOT NULL,
	[PaymentStatus] [varchar](20) NOT NULL,
	[TransactionID] [int] NOT NULL,
	[BillingAddress] [varchar](100) NOT NULL,
	[ForzenLength] [int] NULL,
	[UserID] [int] NOT NULL,
 CONSTRAINT [Payments_pk] PRIMARY KEY CLUSTERED 
(
	[PaymentID] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Planincludes]    Script Date: 4/24/2024 11:43:47 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Planincludes](
	[UserID] [int] NOT NULL,
	[ExerciseDate] [date] NOT NULL,
	[CoachID] [int] NOT NULL,
	[WorkoutID] [int] NOT NULL,
 CONSTRAINT [Planincludes_pk] PRIMARY KEY CLUSTERED 
(
	[UserID] ASC,
	[ExerciseDate] ASC,
	[CoachID] ASC,
	[WorkoutID] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[User]    Script Date: 4/24/2024 11:43:47 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[User](
	[UserID] [int] NOT NULL,
	[Username] [varchar](30) NOT NULL,
	[Gender] [char](1) NOT NULL,
	[Age] [int] NOT NULL,
	[Email] [varchar](30) NOT NULL,
	[Password] [varchar](30) NOT NULL,
	[Active] [bit] NOT NULL,
	[Frozen] [bit] NOT NULL,
	[ForzenLength] [int] NULL,
	[CoachID] [int] NULL,
 CONSTRAINT [User_pk] PRIMARY KEY CLUSTERED 
(
	[UserID] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Uses]    Script Date: 4/24/2024 11:43:47 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Uses](
	[MachineID] [int] NOT NULL,
	[UserID] [int] NOT NULL,
 CONSTRAINT [Uses_pk] PRIMARY KEY CLUSTERED 
(
	[UserID] ASC,
	[MachineID] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Workouts]    Script Date: 4/24/2024 11:43:47 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Workouts](
	[WorkoutID] [int] NOT NULL,
	[CaloriesBurned] [decimal](8, 2) NULL,
	[Date] [date] NULL,
	[WorkoutType] [varchar](30) NULL,
	[Duration] [int] NULL,
	[Sets] [int] NULL,
	[Reps] [int] NULL,
 CONSTRAINT [Workouts_pk] PRIMARY KEY CLUSTERED 
(
	[WorkoutID] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
ALTER TABLE [dbo].[Coach]  WITH CHECK ADD  CONSTRAINT [Coach_fk] FOREIGN KEY([UserID])
REFERENCES [dbo].[User] ([UserID])
GO
ALTER TABLE [dbo].[Coach] CHECK CONSTRAINT [Coach_fk]
GO
ALTER TABLE [dbo].[DailyMetrics]  WITH CHECK ADD  CONSTRAINT [DailyMetrics_fk] FOREIGN KEY([UserID])
REFERENCES [dbo].[User] ([UserID])
GO
ALTER TABLE [dbo].[DailyMetrics] CHECK CONSTRAINT [DailyMetrics_fk]
GO
ALTER TABLE [dbo].[ExercisePlan]  WITH CHECK ADD  CONSTRAINT [ExercisePlan_fk_c] FOREIGN KEY([CoachID])
REFERENCES [dbo].[Coach] ([CoachID])
GO
ALTER TABLE [dbo].[ExercisePlan] CHECK CONSTRAINT [ExercisePlan_fk_c]
GO
ALTER TABLE [dbo].[ExercisePlan]  WITH CHECK ADD  CONSTRAINT [ExercisePlan_fk_u] FOREIGN KEY([UserID])
REFERENCES [dbo].[User] ([UserID])
GO
ALTER TABLE [dbo].[ExercisePlan] CHECK CONSTRAINT [ExercisePlan_fk_u]
GO
ALTER TABLE [dbo].[HealthAssessment]  WITH CHECK ADD  CONSTRAINT [HealthAssessment_fk] FOREIGN KEY([UserID])
REFERENCES [dbo].[User] ([UserID])
GO
ALTER TABLE [dbo].[HealthAssessment] CHECK CONSTRAINT [HealthAssessment_fk]
GO
ALTER TABLE [dbo].[Machines]  WITH CHECK ADD  CONSTRAINT [Machines_fk] FOREIGN KEY([WorkoutID])
REFERENCES [dbo].[Workouts] ([WorkoutID])
GO
ALTER TABLE [dbo].[Machines] CHECK CONSTRAINT [Machines_fk]
GO
ALTER TABLE [dbo].[NutritionPlan]  WITH CHECK ADD  CONSTRAINT [NutritionPlan_fk_c] FOREIGN KEY([CoachID])
REFERENCES [dbo].[Coach] ([CoachID])
GO
ALTER TABLE [dbo].[NutritionPlan] CHECK CONSTRAINT [NutritionPlan_fk_c]
GO
ALTER TABLE [dbo].[NutritionPlan]  WITH CHECK ADD  CONSTRAINT [NutritionPlan_fk_u] FOREIGN KEY([UserID])
REFERENCES [dbo].[User] ([UserID])
GO
ALTER TABLE [dbo].[NutritionPlan] CHECK CONSTRAINT [NutritionPlan_fk_u]
GO
ALTER TABLE [dbo].[Payments]  WITH CHECK ADD  CONSTRAINT [Payments_fk] FOREIGN KEY([UserID])
REFERENCES [dbo].[User] ([UserID])
GO
ALTER TABLE [dbo].[Payments] CHECK CONSTRAINT [Payments_fk]
GO
ALTER TABLE [dbo].[Planincludes]  WITH CHECK ADD  CONSTRAINT [Planincludes_fk_e] FOREIGN KEY([UserID], [ExerciseDate], [CoachID])
REFERENCES [dbo].[ExercisePlan] ([UserID], [ExerciseDate], [CoachID])
GO
ALTER TABLE [dbo].[Planincludes] CHECK CONSTRAINT [Planincludes_fk_e]
GO
ALTER TABLE [dbo].[Planincludes]  WITH CHECK ADD  CONSTRAINT [Planincludes_fk_w] FOREIGN KEY([WorkoutID])
REFERENCES [dbo].[Workouts] ([WorkoutID])
GO
ALTER TABLE [dbo].[Planincludes] CHECK CONSTRAINT [Planincludes_fk_w]
GO
ALTER TABLE [dbo].[User]  WITH CHECK ADD  CONSTRAINT [User_fk] FOREIGN KEY([CoachID])
REFERENCES [dbo].[Coach] ([CoachID])
GO
ALTER TABLE [dbo].[User] CHECK CONSTRAINT [User_fk]
GO
ALTER TABLE [dbo].[Uses]  WITH CHECK ADD  CONSTRAINT [Uses_fk_m] FOREIGN KEY([MachineID])
REFERENCES [dbo].[Machines] ([MachineID])
GO
ALTER TABLE [dbo].[Uses] CHECK CONSTRAINT [Uses_fk_m]
GO
ALTER TABLE [dbo].[Uses]  WITH CHECK ADD  CONSTRAINT [Uses_fk_u] FOREIGN KEY([UserID])
REFERENCES [dbo].[User] ([UserID])
GO
ALTER TABLE [dbo].[Uses] CHECK CONSTRAINT [Uses_fk_u]
GO
/****** Object:  StoredProcedure [dbo].[addUserDetails]    Script Date: 4/24/2024 11:43:47 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE PROCEDURE [dbo].[addUserDetails]
    @UserID INT,
    @Username VARCHAR(30),
    @Gender CHAR(1),
    @Age INT,
    @Email VARCHAR(30),
    @Password VARCHAR(30),
    @Active BIT,
    @Frozen BIT = 0,
    @ForzenLength INT = NULL
AS
BEGIN
    INSERT INTO [User] (UserID, Username, Gender, Age, Email, Password, Active, Frozen, ForzenLength)
    VALUES (@UserID, @Username, @Gender, @Age, @Email, @Password, @Active, @Frozen, @ForzenLength)
END


-- Delete data from the Coach table
DELETE FROM [PeakShift].[dbo].[Coach] WHERE CoachID IN (101, 102, 103);

-- Delete data from the User table
DELETE FROM [PeakShift].[dbo].[User] WHERE UserID IN (1, 2, 3);

GO
USE [master]
GO
ALTER DATABASE [PeakShift] SET  READ_WRITE 
GO
