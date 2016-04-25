                                }
                                break;
                        case 2:
                                outputAll(names,scores, 5);
                                break;
                        case 3:
                                cout << "Average score = " << getAverage(scores, 5) << endl;
                                break;
                        case 4:
                                cout << "Input # of student you wish to update: ";
                                cin >> index;
                                if (index >=1 && index <= 5)
                                {
                                        outputOne(names, scores, index);
                                        cout << "Input new score: ";
                                        cin >> scores[index-1];
                                        //updateScore( scores, score, index );
                                        cout << "Student's info is updated."<< endl;
                                        outputAll(names, scores, 5);
                                }
                                else
                                {
                                        cout << "Invalid index!" << endl;
                                }
                        default:
                                running = false;
                                break;
                }
        }while(running);



-- INSERT --                                                                 89,1          Bot

