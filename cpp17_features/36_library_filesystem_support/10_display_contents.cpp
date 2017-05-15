// sample(0)
void display_contents(std::string const & p)
{
  std::cout << p << "\n";

  struct dirent *dp;
  DIR *dfd;
  
  if ((dfd = opendir(p.c_str()) == nullptr)
    return;

  while ((dp = readdir(dfd)) != nullptr)
  {
    struct stat st;
    string filename = p + "/" + dp->d_Name;
    if (stat(filename.c_str(), &st) == -1)
      continue;
      
    if ((st.st_mode & S_IFMT) == S_IFDIR)
      std::cout << "  " << filename << "\n";
    else 
      std::cout << "  " << filename
                << " [" << st.st_size
                << " bytes]\n";
  }
}
// end-sample

// sample(1)
void display_contents(fs::path const & p)
{
  std::cout << p.filename() << "\n";

  if (!fs::is_directory(p))
    return;

  for (auto const & e: fs::directory_iterator{p})
  {
    if (fs::is_regular_file(e.status()))
      std::cout << "  " << e.path().filename()
                << " [" << fs::file_size(e) << " bytes]\n";
    else if (fs::is_directory(e.status()))
      std::cout << "  " << e.path().filename() << "\n";
  }
}
// end-sample

