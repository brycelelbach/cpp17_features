                                         // For width
// sample(primary)
device d = // ...                        
switch (d.status())
{
  case sleep: d.wake();
  case ready: d.run(); break;
  case bad:   std::terminate(); 
}
// end-sample

