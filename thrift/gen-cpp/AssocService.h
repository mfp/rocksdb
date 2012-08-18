/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef  _Tleveldb_AssocService_H
#define  _Tleveldb_AssocService_H

#include <TDispatchProcessor.h>
#include "leveldb_types.h"

namespace Tleveldb {

class AssocServiceIf {
 public:
  virtual ~AssocServiceIf() {}
  virtual int64_t taoAssocPut(const Text& tableName, int64_t assocType, int64_t id1, int64_t id2, int64_t id1Type, int64_t id2Type, int64_t timestamp, AssocVisibility visibility, bool update_count, int64_t dataVersion, const Text& data, const Text& wormhole_comment) = 0;
  virtual int64_t taoAssocDelete(const Text& tableName, int64_t assocType, int64_t id1, int64_t id2, AssocVisibility visibility, bool update_count, const Text& wormhole_comment) = 0;
  virtual void taoAssocRangeGet(std::vector<TaoAssocGetResult> & _return, const Text& tableName, int64_t assocType, int64_t id1, int64_t start_time, int64_t end_time, int64_t offset, int64_t limit) = 0;
  virtual void taoAssocGet(std::vector<TaoAssocGetResult> & _return, const Text& tableName, int64_t assocType, int64_t id1, const std::vector<int64_t> & id2s) = 0;
  virtual int64_t taoAssocCount(const Text& tableName, int64_t assocType, int64_t id1) = 0;
};

class AssocServiceIfFactory {
 public:
  typedef AssocServiceIf Handler;

  virtual ~AssocServiceIfFactory() {}

  virtual AssocServiceIf* getHandler(::apache::thrift::server::TConnectionContext* ctx) = 0;
  virtual void releaseHandler(AssocServiceIf* handler) = 0;
};

class AssocServiceIfSingletonFactory : virtual public AssocServiceIfFactory {
 public:
  AssocServiceIfSingletonFactory(const boost::shared_ptr<AssocServiceIf>& iface) : iface_(iface) {}
  virtual ~AssocServiceIfSingletonFactory() {}

  virtual AssocServiceIf* getHandler(::apache::thrift::server::TConnectionContext*) {
    return iface_.get();
  }
  virtual void releaseHandler(AssocServiceIf* handler) {}

 protected:
  boost::shared_ptr<AssocServiceIf> iface_;
};

class AssocServiceNull : virtual public AssocServiceIf {
 public:
  virtual ~AssocServiceNull() {}
  int64_t taoAssocPut(const Text& /* tableName */, int64_t /* assocType */, int64_t /* id1 */, int64_t /* id2 */, int64_t /* id1Type */, int64_t /* id2Type */, int64_t /* timestamp */, AssocVisibility /* visibility */, bool /* update_count */, int64_t /* dataVersion */, const Text& /* data */, const Text& /* wormhole_comment */) {
    int64_t _return = 0;
    return _return;
  }
  int64_t taoAssocDelete(const Text& /* tableName */, int64_t /* assocType */, int64_t /* id1 */, int64_t /* id2 */, AssocVisibility /* visibility */, bool /* update_count */, const Text& /* wormhole_comment */) {
    int64_t _return = 0;
    return _return;
  }
  void taoAssocRangeGet(std::vector<TaoAssocGetResult> & /* _return */, const Text& /* tableName */, int64_t /* assocType */, int64_t /* id1 */, int64_t /* start_time */, int64_t /* end_time */, int64_t /* offset */, int64_t /* limit */) {
    return;
  }
  void taoAssocGet(std::vector<TaoAssocGetResult> & /* _return */, const Text& /* tableName */, int64_t /* assocType */, int64_t /* id1 */, const std::vector<int64_t> & /* id2s */) {
    return;
  }
  int64_t taoAssocCount(const Text& /* tableName */, int64_t /* assocType */, int64_t /* id1 */) {
    int64_t _return = 0;
    return _return;
  }
};

class AssocService_taoAssocPut_args {
 public:

  static const uint64_t _reflection_id = 3290305132890847884U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  AssocService_taoAssocPut_args() : tableName(""), assocType(0), id1(0), id2(0), id1Type(0), id2Type(0), timestamp(0), visibility(static_cast<AssocVisibility>(0)), update_count(0), dataVersion(0), data(""), wormhole_comment("") {
  }

  AssocService_taoAssocPut_args(const AssocService_taoAssocPut_args&) = default;
  AssocService_taoAssocPut_args& operator=(const AssocService_taoAssocPut_args&) = default;
  AssocService_taoAssocPut_args(AssocService_taoAssocPut_args&&) = default;
  AssocService_taoAssocPut_args& operator=(AssocService_taoAssocPut_args&&) = default;

  void __clear() {
    tableName = "";
    assocType = 0;
    id1 = 0;
    id2 = 0;
    id1Type = 0;
    id2Type = 0;
    timestamp = 0;
    visibility = static_cast<AssocVisibility>(0);
    update_count = 0;
    dataVersion = 0;
    data = "";
    wormhole_comment = "";
    __isset.__clear();
  }

  virtual ~AssocService_taoAssocPut_args() throw() {}

  Text tableName;
  int64_t assocType;
  int64_t id1;
  int64_t id2;
  int64_t id1Type;
  int64_t id2Type;
  int64_t timestamp;
  AssocVisibility visibility;
  bool update_count;
  int64_t dataVersion;
  Text data;
  Text wormhole_comment;

  struct __isset {
    __isset() { __clear(); } 
    void __clear() {
      tableName = false;
      assocType = false;
      id1 = false;
      id2 = false;
      id1Type = false;
      id2Type = false;
      timestamp = false;
      visibility = false;
      update_count = false;
      dataVersion = false;
      data = false;
      wormhole_comment = false;
    }
    bool tableName;
    bool assocType;
    bool id1;
    bool id2;
    bool id1Type;
    bool id2Type;
    bool timestamp;
    bool visibility;
    bool update_count;
    bool dataVersion;
    bool data;
    bool wormhole_comment;
  } __isset;

  bool operator == (const AssocService_taoAssocPut_args & rhs) const
  {
    if (!(this->tableName == rhs.tableName))
      return false;
    if (!(this->assocType == rhs.assocType))
      return false;
    if (!(this->id1 == rhs.id1))
      return false;
    if (!(this->id2 == rhs.id2))
      return false;
    if (!(this->id1Type == rhs.id1Type))
      return false;
    if (!(this->id2Type == rhs.id2Type))
      return false;
    if (!(this->timestamp == rhs.timestamp))
      return false;
    if (!(this->visibility == rhs.visibility))
      return false;
    if (!(this->update_count == rhs.update_count))
      return false;
    if (!(this->dataVersion == rhs.dataVersion))
      return false;
    if (!(this->data == rhs.data))
      return false;
    if (!(this->wormhole_comment == rhs.wormhole_comment))
      return false;
    return true;
  }
  bool operator != (const AssocService_taoAssocPut_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AssocService_taoAssocPut_args & ) const;

  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

};

class AssocService_taoAssocPut_pargs {
 public:

  static const uint64_t _reflection_id = 7425952401724740620U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);

  virtual ~AssocService_taoAssocPut_pargs() throw() {}

  const Text* tableName;
  const int64_t* assocType;
  const int64_t* id1;
  const int64_t* id2;
  const int64_t* id1Type;
  const int64_t* id2Type;
  const int64_t* timestamp;
  const AssocVisibility* visibility;
  const bool* update_count;
  const int64_t* dataVersion;
  const Text* data;
  const Text* wormhole_comment;

  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

};

class AssocService_taoAssocPut_result {
 public:

  static const uint64_t _reflection_id = 6526721986074776780U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  AssocService_taoAssocPut_result() : success(0) {
  }

  AssocService_taoAssocPut_result(const AssocService_taoAssocPut_result&) = default;
  AssocService_taoAssocPut_result& operator=(const AssocService_taoAssocPut_result&) = default;
  AssocService_taoAssocPut_result(AssocService_taoAssocPut_result&&) = default;
  AssocService_taoAssocPut_result& operator=(AssocService_taoAssocPut_result&&) = default;

  void __clear() {
    success = 0;
    io.__clear();
    __isset.__clear();
  }

  virtual ~AssocService_taoAssocPut_result() throw() {}

  int64_t success;
  IOError io;

  struct __isset {
    __isset() { __clear(); } 
    void __clear() {
      success = false;
      io = false;
    }
    bool success;
    bool io;
  } __isset;

  bool operator == (const AssocService_taoAssocPut_result & rhs) const
  {
    if (!(this->success == rhs.success))
      return false;
    if (!(this->io == rhs.io))
      return false;
    return true;
  }
  bool operator != (const AssocService_taoAssocPut_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AssocService_taoAssocPut_result & ) const;

  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

};

class AssocService_taoAssocPut_presult {
 public:

  static const uint64_t _reflection_id = 12671665598022141484U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);

  virtual ~AssocService_taoAssocPut_presult() throw() {}

  int64_t* success;
  IOError io;

  struct __isset {
    __isset() { __clear(); } 
    void __clear() {
      success = false;
      io = false;
    }
    bool success;
    bool io;
  } __isset;

  uint32_t read(apache::thrift::protocol::TProtocol* iprot);

};

class AssocService_taoAssocDelete_args {
 public:

  static const uint64_t _reflection_id = 10270079889653832204U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  AssocService_taoAssocDelete_args() : tableName(""), assocType(0), id1(0), id2(0), visibility(static_cast<AssocVisibility>(0)), update_count(0), wormhole_comment("") {
  }

  AssocService_taoAssocDelete_args(const AssocService_taoAssocDelete_args&) = default;
  AssocService_taoAssocDelete_args& operator=(const AssocService_taoAssocDelete_args&) = default;
  AssocService_taoAssocDelete_args(AssocService_taoAssocDelete_args&&) = default;
  AssocService_taoAssocDelete_args& operator=(AssocService_taoAssocDelete_args&&) = default;

  void __clear() {
    tableName = "";
    assocType = 0;
    id1 = 0;
    id2 = 0;
    visibility = static_cast<AssocVisibility>(0);
    update_count = 0;
    wormhole_comment = "";
    __isset.__clear();
  }

  virtual ~AssocService_taoAssocDelete_args() throw() {}

  Text tableName;
  int64_t assocType;
  int64_t id1;
  int64_t id2;
  AssocVisibility visibility;
  bool update_count;
  Text wormhole_comment;

  struct __isset {
    __isset() { __clear(); } 
    void __clear() {
      tableName = false;
      assocType = false;
      id1 = false;
      id2 = false;
      visibility = false;
      update_count = false;
      wormhole_comment = false;
    }
    bool tableName;
    bool assocType;
    bool id1;
    bool id2;
    bool visibility;
    bool update_count;
    bool wormhole_comment;
  } __isset;

  bool operator == (const AssocService_taoAssocDelete_args & rhs) const
  {
    if (!(this->tableName == rhs.tableName))
      return false;
    if (!(this->assocType == rhs.assocType))
      return false;
    if (!(this->id1 == rhs.id1))
      return false;
    if (!(this->id2 == rhs.id2))
      return false;
    if (!(this->visibility == rhs.visibility))
      return false;
    if (!(this->update_count == rhs.update_count))
      return false;
    if (!(this->wormhole_comment == rhs.wormhole_comment))
      return false;
    return true;
  }
  bool operator != (const AssocService_taoAssocDelete_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AssocService_taoAssocDelete_args & ) const;

  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

};

class AssocService_taoAssocDelete_pargs {
 public:

  static const uint64_t _reflection_id = 4795542044867620812U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);

  virtual ~AssocService_taoAssocDelete_pargs() throw() {}

  const Text* tableName;
  const int64_t* assocType;
  const int64_t* id1;
  const int64_t* id2;
  const AssocVisibility* visibility;
  const bool* update_count;
  const Text* wormhole_comment;

  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

};

class AssocService_taoAssocDelete_result {
 public:

  static const uint64_t _reflection_id = 12133907334276134572U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  AssocService_taoAssocDelete_result() : success(0) {
  }

  AssocService_taoAssocDelete_result(const AssocService_taoAssocDelete_result&) = default;
  AssocService_taoAssocDelete_result& operator=(const AssocService_taoAssocDelete_result&) = default;
  AssocService_taoAssocDelete_result(AssocService_taoAssocDelete_result&&) = default;
  AssocService_taoAssocDelete_result& operator=(AssocService_taoAssocDelete_result&&) = default;

  void __clear() {
    success = 0;
    io.__clear();
    __isset.__clear();
  }

  virtual ~AssocService_taoAssocDelete_result() throw() {}

  int64_t success;
  IOError io;

  struct __isset {
    __isset() { __clear(); } 
    void __clear() {
      success = false;
      io = false;
    }
    bool success;
    bool io;
  } __isset;

  bool operator == (const AssocService_taoAssocDelete_result & rhs) const
  {
    if (!(this->success == rhs.success))
      return false;
    if (!(this->io == rhs.io))
      return false;
    return true;
  }
  bool operator != (const AssocService_taoAssocDelete_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AssocService_taoAssocDelete_result & ) const;

  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

};

class AssocService_taoAssocDelete_presult {
 public:

  static const uint64_t _reflection_id = 14125941752039435212U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);

  virtual ~AssocService_taoAssocDelete_presult() throw() {}

  int64_t* success;
  IOError io;

  struct __isset {
    __isset() { __clear(); } 
    void __clear() {
      success = false;
      io = false;
    }
    bool success;
    bool io;
  } __isset;

  uint32_t read(apache::thrift::protocol::TProtocol* iprot);

};

class AssocService_taoAssocRangeGet_args {
 public:

  static const uint64_t _reflection_id = 1735721774207336108U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  AssocService_taoAssocRangeGet_args() : tableName(""), assocType(0), id1(0), start_time(0), end_time(0), offset(0), limit(0) {
  }

  AssocService_taoAssocRangeGet_args(const AssocService_taoAssocRangeGet_args&) = default;
  AssocService_taoAssocRangeGet_args& operator=(const AssocService_taoAssocRangeGet_args&) = default;
  AssocService_taoAssocRangeGet_args(AssocService_taoAssocRangeGet_args&&) = default;
  AssocService_taoAssocRangeGet_args& operator=(AssocService_taoAssocRangeGet_args&&) = default;

  void __clear() {
    tableName = "";
    assocType = 0;
    id1 = 0;
    start_time = 0;
    end_time = 0;
    offset = 0;
    limit = 0;
    __isset.__clear();
  }

  virtual ~AssocService_taoAssocRangeGet_args() throw() {}

  Text tableName;
  int64_t assocType;
  int64_t id1;
  int64_t start_time;
  int64_t end_time;
  int64_t offset;
  int64_t limit;

  struct __isset {
    __isset() { __clear(); } 
    void __clear() {
      tableName = false;
      assocType = false;
      id1 = false;
      start_time = false;
      end_time = false;
      offset = false;
      limit = false;
    }
    bool tableName;
    bool assocType;
    bool id1;
    bool start_time;
    bool end_time;
    bool offset;
    bool limit;
  } __isset;

  bool operator == (const AssocService_taoAssocRangeGet_args & rhs) const
  {
    if (!(this->tableName == rhs.tableName))
      return false;
    if (!(this->assocType == rhs.assocType))
      return false;
    if (!(this->id1 == rhs.id1))
      return false;
    if (!(this->start_time == rhs.start_time))
      return false;
    if (!(this->end_time == rhs.end_time))
      return false;
    if (!(this->offset == rhs.offset))
      return false;
    if (!(this->limit == rhs.limit))
      return false;
    return true;
  }
  bool operator != (const AssocService_taoAssocRangeGet_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AssocService_taoAssocRangeGet_args & ) const;

  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

};

class AssocService_taoAssocRangeGet_pargs {
 public:

  static const uint64_t _reflection_id = 5056015852824808108U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);

  virtual ~AssocService_taoAssocRangeGet_pargs() throw() {}

  const Text* tableName;
  const int64_t* assocType;
  const int64_t* id1;
  const int64_t* start_time;
  const int64_t* end_time;
  const int64_t* offset;
  const int64_t* limit;

  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

};

class AssocService_taoAssocRangeGet_result {
 public:

  static const uint64_t _reflection_id = 100254754914408876U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  AssocService_taoAssocRangeGet_result() {
  }

  AssocService_taoAssocRangeGet_result(const AssocService_taoAssocRangeGet_result&) = default;
  AssocService_taoAssocRangeGet_result& operator=(const AssocService_taoAssocRangeGet_result&) = default;
  AssocService_taoAssocRangeGet_result(AssocService_taoAssocRangeGet_result&&) = default;
  AssocService_taoAssocRangeGet_result& operator=(AssocService_taoAssocRangeGet_result&&) = default;

  void __clear() {
    success.clear();
    io.__clear();
    __isset.__clear();
  }

  virtual ~AssocService_taoAssocRangeGet_result() throw() {}

  std::vector<TaoAssocGetResult>  success;
  IOError io;

  struct __isset {
    __isset() { __clear(); } 
    void __clear() {
      success = false;
      io = false;
    }
    bool success;
    bool io;
  } __isset;

  bool operator == (const AssocService_taoAssocRangeGet_result & rhs) const
  {
    if (!(this->success == rhs.success))
      return false;
    if (!(this->io == rhs.io))
      return false;
    return true;
  }
  bool operator != (const AssocService_taoAssocRangeGet_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AssocService_taoAssocRangeGet_result & ) const;

  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

};

class AssocService_taoAssocRangeGet_presult {
 public:

  static const uint64_t _reflection_id = 10811387055164057228U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);

  virtual ~AssocService_taoAssocRangeGet_presult() throw() {}

  std::vector<TaoAssocGetResult> * success;
  IOError io;

  struct __isset {
    __isset() { __clear(); } 
    void __clear() {
      success = false;
      io = false;
    }
    bool success;
    bool io;
  } __isset;

  uint32_t read(apache::thrift::protocol::TProtocol* iprot);

};

class AssocService_taoAssocGet_args {
 public:

  static const uint64_t _reflection_id = 16546497730627888492U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  AssocService_taoAssocGet_args() : tableName(""), assocType(0), id1(0) {
  }

  AssocService_taoAssocGet_args(const AssocService_taoAssocGet_args&) = default;
  AssocService_taoAssocGet_args& operator=(const AssocService_taoAssocGet_args&) = default;
  AssocService_taoAssocGet_args(AssocService_taoAssocGet_args&&) = default;
  AssocService_taoAssocGet_args& operator=(AssocService_taoAssocGet_args&&) = default;

  void __clear() {
    tableName = "";
    assocType = 0;
    id1 = 0;
    id2s.clear();
    __isset.__clear();
  }

  virtual ~AssocService_taoAssocGet_args() throw() {}

  Text tableName;
  int64_t assocType;
  int64_t id1;
  std::vector<int64_t>  id2s;

  struct __isset {
    __isset() { __clear(); } 
    void __clear() {
      tableName = false;
      assocType = false;
      id1 = false;
      id2s = false;
    }
    bool tableName;
    bool assocType;
    bool id1;
    bool id2s;
  } __isset;

  bool operator == (const AssocService_taoAssocGet_args & rhs) const
  {
    if (!(this->tableName == rhs.tableName))
      return false;
    if (!(this->assocType == rhs.assocType))
      return false;
    if (!(this->id1 == rhs.id1))
      return false;
    if (!(this->id2s == rhs.id2s))
      return false;
    return true;
  }
  bool operator != (const AssocService_taoAssocGet_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AssocService_taoAssocGet_args & ) const;

  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

};

class AssocService_taoAssocGet_pargs {
 public:

  static const uint64_t _reflection_id = 9292472387579296684U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);

  virtual ~AssocService_taoAssocGet_pargs() throw() {}

  const Text* tableName;
  const int64_t* assocType;
  const int64_t* id1;
  const std::vector<int64_t> * id2s;

  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

};

class AssocService_taoAssocGet_result {
 public:

  static const uint64_t _reflection_id = 330126441639238892U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  AssocService_taoAssocGet_result() {
  }

  AssocService_taoAssocGet_result(const AssocService_taoAssocGet_result&) = default;
  AssocService_taoAssocGet_result& operator=(const AssocService_taoAssocGet_result&) = default;
  AssocService_taoAssocGet_result(AssocService_taoAssocGet_result&&) = default;
  AssocService_taoAssocGet_result& operator=(AssocService_taoAssocGet_result&&) = default;

  void __clear() {
    success.clear();
    io.__clear();
    __isset.__clear();
  }

  virtual ~AssocService_taoAssocGet_result() throw() {}

  std::vector<TaoAssocGetResult>  success;
  IOError io;

  struct __isset {
    __isset() { __clear(); } 
    void __clear() {
      success = false;
      io = false;
    }
    bool success;
    bool io;
  } __isset;

  bool operator == (const AssocService_taoAssocGet_result & rhs) const
  {
    if (!(this->success == rhs.success))
      return false;
    if (!(this->io == rhs.io))
      return false;
    return true;
  }
  bool operator != (const AssocService_taoAssocGet_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AssocService_taoAssocGet_result & ) const;

  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

};

class AssocService_taoAssocGet_presult {
 public:

  static const uint64_t _reflection_id = 230475374475192236U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);

  virtual ~AssocService_taoAssocGet_presult() throw() {}

  std::vector<TaoAssocGetResult> * success;
  IOError io;

  struct __isset {
    __isset() { __clear(); } 
    void __clear() {
      success = false;
      io = false;
    }
    bool success;
    bool io;
  } __isset;

  uint32_t read(apache::thrift::protocol::TProtocol* iprot);

};

class AssocService_taoAssocCount_args {
 public:

  static const uint64_t _reflection_id = 769199732449473196U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  AssocService_taoAssocCount_args() : tableName(""), assocType(0), id1(0) {
  }

  AssocService_taoAssocCount_args(const AssocService_taoAssocCount_args&) = default;
  AssocService_taoAssocCount_args& operator=(const AssocService_taoAssocCount_args&) = default;
  AssocService_taoAssocCount_args(AssocService_taoAssocCount_args&&) = default;
  AssocService_taoAssocCount_args& operator=(AssocService_taoAssocCount_args&&) = default;

  void __clear() {
    tableName = "";
    assocType = 0;
    id1 = 0;
    __isset.__clear();
  }

  virtual ~AssocService_taoAssocCount_args() throw() {}

  Text tableName;
  int64_t assocType;
  int64_t id1;

  struct __isset {
    __isset() { __clear(); } 
    void __clear() {
      tableName = false;
      assocType = false;
      id1 = false;
    }
    bool tableName;
    bool assocType;
    bool id1;
  } __isset;

  bool operator == (const AssocService_taoAssocCount_args & rhs) const
  {
    if (!(this->tableName == rhs.tableName))
      return false;
    if (!(this->assocType == rhs.assocType))
      return false;
    if (!(this->id1 == rhs.id1))
      return false;
    return true;
  }
  bool operator != (const AssocService_taoAssocCount_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AssocService_taoAssocCount_args & ) const;

  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

};

class AssocService_taoAssocCount_pargs {
 public:

  static const uint64_t _reflection_id = 4871158744897524556U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);

  virtual ~AssocService_taoAssocCount_pargs() throw() {}

  const Text* tableName;
  const int64_t* assocType;
  const int64_t* id1;

  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

};

class AssocService_taoAssocCount_result {
 public:

  static const uint64_t _reflection_id = 824429928060194060U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  AssocService_taoAssocCount_result() : success(0) {
  }

  AssocService_taoAssocCount_result(const AssocService_taoAssocCount_result&) = default;
  AssocService_taoAssocCount_result& operator=(const AssocService_taoAssocCount_result&) = default;
  AssocService_taoAssocCount_result(AssocService_taoAssocCount_result&&) = default;
  AssocService_taoAssocCount_result& operator=(AssocService_taoAssocCount_result&&) = default;

  void __clear() {
    success = 0;
    io.__clear();
    __isset.__clear();
  }

  virtual ~AssocService_taoAssocCount_result() throw() {}

  int64_t success;
  IOError io;

  struct __isset {
    __isset() { __clear(); } 
    void __clear() {
      success = false;
      io = false;
    }
    bool success;
    bool io;
  } __isset;

  bool operator == (const AssocService_taoAssocCount_result & rhs) const
  {
    if (!(this->success == rhs.success))
      return false;
    if (!(this->io == rhs.io))
      return false;
    return true;
  }
  bool operator != (const AssocService_taoAssocCount_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AssocService_taoAssocCount_result & ) const;

  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

};

class AssocService_taoAssocCount_presult {
 public:

  static const uint64_t _reflection_id = 7130695620086441804U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);

  virtual ~AssocService_taoAssocCount_presult() throw() {}

  int64_t* success;
  IOError io;

  struct __isset {
    __isset() { __clear(); } 
    void __clear() {
      success = false;
      io = false;
    }
    bool success;
    bool io;
  } __isset;

  uint32_t read(apache::thrift::protocol::TProtocol* iprot);

};

class AssocServiceClient : virtual public AssocServiceIf, virtual public apache::thrift::TClientBase {
 public:
  AssocServiceClient(boost::shared_ptr<apache::thrift::protocol::TProtocol> prot) :
    checkSeqid_(true),
    nextSendSequenceId_(1),
    nextRecvSequenceId_(1),
    piprot_(prot),
    poprot_(prot) {
    iprot_ = prot.get();
    oprot_ = prot.get();
  }
  AssocServiceClient(boost::shared_ptr<apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr<apache::thrift::protocol::TProtocol> oprot) :
    checkSeqid_(true),
    nextSendSequenceId_(1),
    nextRecvSequenceId_(1),
    piprot_(iprot),
    poprot_(oprot) {
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
  boost::shared_ptr<apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr<apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  int64_t taoAssocPut(const Text& tableName, int64_t assocType, int64_t id1, int64_t id2, int64_t id1Type, int64_t id2Type, int64_t timestamp, AssocVisibility visibility, bool update_count, int64_t dataVersion, const Text& data, const Text& wormhole_comment);
  void send_taoAssocPut(const Text& tableName, int64_t assocType, int64_t id1, int64_t id2, int64_t id1Type, int64_t id2Type, int64_t timestamp, AssocVisibility visibility, bool update_count, int64_t dataVersion, const Text& data, const Text& wormhole_comment);
  int64_t recv_taoAssocPut();
  int64_t taoAssocDelete(const Text& tableName, int64_t assocType, int64_t id1, int64_t id2, AssocVisibility visibility, bool update_count, const Text& wormhole_comment);
  void send_taoAssocDelete(const Text& tableName, int64_t assocType, int64_t id1, int64_t id2, AssocVisibility visibility, bool update_count, const Text& wormhole_comment);
  int64_t recv_taoAssocDelete();
  void taoAssocRangeGet(std::vector<TaoAssocGetResult> & _return, const Text& tableName, int64_t assocType, int64_t id1, int64_t start_time, int64_t end_time, int64_t offset, int64_t limit);
  void send_taoAssocRangeGet(const Text& tableName, int64_t assocType, int64_t id1, int64_t start_time, int64_t end_time, int64_t offset, int64_t limit);
  void recv_taoAssocRangeGet(std::vector<TaoAssocGetResult> & _return);
  void taoAssocGet(std::vector<TaoAssocGetResult> & _return, const Text& tableName, int64_t assocType, int64_t id1, const std::vector<int64_t> & id2s);
  void send_taoAssocGet(const Text& tableName, int64_t assocType, int64_t id1, const std::vector<int64_t> & id2s);
  void recv_taoAssocGet(std::vector<TaoAssocGetResult> & _return);
  int64_t taoAssocCount(const Text& tableName, int64_t assocType, int64_t id1);
  void send_taoAssocCount(const Text& tableName, int64_t assocType, int64_t id1);
  int64_t recv_taoAssocCount();

  /**
   * Disable checking the seqid field in server responses.
   *
   * This should only be used with broken servers that return incorrect seqid values.
   */
  void _disableSequenceIdChecks() {
    checkSeqid_ = false;
  }

 protected:
  bool checkSeqid_;
  int32_t nextSendSequenceId_;
  int32_t nextRecvSequenceId_;
  int32_t getNextSendSequenceId();
  int32_t getNextRecvSequenceId();
  boost::shared_ptr<apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr<apache::thrift::protocol::TProtocol> poprot_;
  apache::thrift::protocol::TProtocol* iprot_;
  apache::thrift::protocol::TProtocol* oprot_;
};

class AssocServiceProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  boost::shared_ptr<AssocServiceIf> iface_;
  virtual bool dispatchCall(apache::thrift::protocol::TProtocol* iprot, apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, apache::thrift::server::TConnectionContext* connectionContext);
 private:
  typedef  void (AssocServiceProcessor::*ProcessFunction)(int32_t, apache::thrift::protocol::TProtocol*, apache::thrift::protocol::TProtocol*, apache::thrift::server::TConnectionContext*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_taoAssocPut(int32_t seqid, apache::thrift::protocol::TProtocol* iprot, apache::thrift::protocol::TProtocol* oprot, apache::thrift::server::TConnectionContext* connectionContext);
  void process_taoAssocDelete(int32_t seqid, apache::thrift::protocol::TProtocol* iprot, apache::thrift::protocol::TProtocol* oprot, apache::thrift::server::TConnectionContext* connectionContext);
  void process_taoAssocRangeGet(int32_t seqid, apache::thrift::protocol::TProtocol* iprot, apache::thrift::protocol::TProtocol* oprot, apache::thrift::server::TConnectionContext* connectionContext);
  void process_taoAssocGet(int32_t seqid, apache::thrift::protocol::TProtocol* iprot, apache::thrift::protocol::TProtocol* oprot, apache::thrift::server::TConnectionContext* connectionContext);
  void process_taoAssocCount(int32_t seqid, apache::thrift::protocol::TProtocol* iprot, apache::thrift::protocol::TProtocol* oprot, apache::thrift::server::TConnectionContext* connectionContext);
 public:
  AssocServiceProcessor(boost::shared_ptr<AssocServiceIf> iface) :
    iface_(iface) {
    processMap_["taoAssocPut"] = &AssocServiceProcessor::process_taoAssocPut;
    processMap_["taoAssocDelete"] = &AssocServiceProcessor::process_taoAssocDelete;
    processMap_["taoAssocRangeGet"] = &AssocServiceProcessor::process_taoAssocRangeGet;
    processMap_["taoAssocGet"] = &AssocServiceProcessor::process_taoAssocGet;
    processMap_["taoAssocCount"] = &AssocServiceProcessor::process_taoAssocCount;
  }

  virtual ~AssocServiceProcessor() {}

  boost::shared_ptr<std::set<std::string> > getProcessFunctions() { 
    boost::shared_ptr<std::set<std::string> > rSet(new std::set<std::string>());
    rSet->insert("AssocService.taoAssocPut");
    rSet->insert("AssocService.taoAssocDelete");
    rSet->insert("AssocService.taoAssocRangeGet");
    rSet->insert("AssocService.taoAssocGet");
    rSet->insert("AssocService.taoAssocCount");
    return rSet;
  }
};

class AssocServiceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  AssocServiceProcessorFactory(const ::boost::shared_ptr< AssocServiceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::TProcessor > getProcessor(::apache::thrift::server::TConnectionContext* ctx);

 protected:
  ::boost::shared_ptr< AssocServiceIfFactory > handlerFactory_;
};

class AssocServiceMultiface : virtual public AssocServiceIf {
 public:
  AssocServiceMultiface(std::vector<boost::shared_ptr<AssocServiceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~AssocServiceMultiface() {}
 protected:
  std::vector<boost::shared_ptr<AssocServiceIf> > ifaces_;
  AssocServiceMultiface() {}
  void add(boost::shared_ptr<AssocServiceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  int64_t taoAssocPut(const Text& tableName, int64_t assocType, int64_t id1, int64_t id2, int64_t id1Type, int64_t id2Type, int64_t timestamp, AssocVisibility visibility, bool update_count, int64_t dataVersion, const Text& data, const Text& wormhole_comment) {
    uint32_t i;
    uint32_t sz = ifaces_.size();
    for (i = 0; i < sz - 1; ++i) {
      ifaces_[i]->taoAssocPut(tableName, assocType, id1, id2, id1Type, id2Type, timestamp, visibility, update_count, dataVersion, data, wormhole_comment);
    }
    return ifaces_[i]->taoAssocPut(tableName, assocType, id1, id2, id1Type, id2Type, timestamp, visibility, update_count, dataVersion, data, wormhole_comment);
  }

  int64_t taoAssocDelete(const Text& tableName, int64_t assocType, int64_t id1, int64_t id2, AssocVisibility visibility, bool update_count, const Text& wormhole_comment) {
    uint32_t i;
    uint32_t sz = ifaces_.size();
    for (i = 0; i < sz - 1; ++i) {
      ifaces_[i]->taoAssocDelete(tableName, assocType, id1, id2, visibility, update_count, wormhole_comment);
    }
    return ifaces_[i]->taoAssocDelete(tableName, assocType, id1, id2, visibility, update_count, wormhole_comment);
  }

  void taoAssocRangeGet(std::vector<TaoAssocGetResult> & _return, const Text& tableName, int64_t assocType, int64_t id1, int64_t start_time, int64_t end_time, int64_t offset, int64_t limit) {
    uint32_t i;
    uint32_t sz = ifaces_.size();
    for (i = 0; i < sz; ++i) {
      ifaces_[i]->taoAssocRangeGet(_return, tableName, assocType, id1, start_time, end_time, offset, limit);
    }
  }

  void taoAssocGet(std::vector<TaoAssocGetResult> & _return, const Text& tableName, int64_t assocType, int64_t id1, const std::vector<int64_t> & id2s) {
    uint32_t i;
    uint32_t sz = ifaces_.size();
    for (i = 0; i < sz; ++i) {
      ifaces_[i]->taoAssocGet(_return, tableName, assocType, id1, id2s);
    }
  }

  int64_t taoAssocCount(const Text& tableName, int64_t assocType, int64_t id1) {
    uint32_t i;
    uint32_t sz = ifaces_.size();
    for (i = 0; i < sz - 1; ++i) {
      ifaces_[i]->taoAssocCount(tableName, assocType, id1);
    }
    return ifaces_[i]->taoAssocCount(tableName, assocType, id1);
  }

};

} // namespace

#endif