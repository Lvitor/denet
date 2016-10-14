/*  This file is part of denet. 
 *  denet is a tool to study Bovespa-listed companies. 
 *
 *  Copyleft (c) 2016 - Potuz Vader potuz@potuz.net
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef DFP_CVM_CONNECTION_INCLUDED
#define DFP_CVM_CONNECTION_INCLUDED
#include <string>
#include <vector>
#include "dfp_cvm_file.h"
namespace Dfp {
  struct CvmUrl {
    int protocol;
    std::string date_str;
    int revision;
  };
}
namespace Dfp {
  namespace Cvm {
    CvmUrl last_available_for_download ( int cvm, CvmFileType filetype );
    std::vector<CvmUrl> available_for_download ( int cvm, 
        Dfp::CvmFileType filetype, int links = 40 );

    std::string download ( int protocol, const std::string & path );
  }
}

#endif
