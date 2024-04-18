INSERT INTO "User" (UserID, Username, Gender, Age, Email, Password, Active, Frozen, ForzenLength)
VALUES
(1, 'john_doe', 'M', 25, 'john@example.com', 'password123', 1, 0, NULL),
(2, 'jane_doe', 'F', 30, 'jane@example.com', 'password456', 1, 0, NULL),
(3, 'bob_smith', 'M', 35, 'bob@example.com', 'password789', 0, 1, 365);
