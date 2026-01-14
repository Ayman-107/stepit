#include <stepit/publisher.h>
#include <stepit/spin.h>

namespace stepit {
STEPIT_REGISTER_PUBLISHER(dummy, kMinPriority, Publisher::make<Publisher>);
STEPIT_REGISTER_SPIN(wait_for_sigint, kMinPriority + 1, Spin::make<WaitForSigInt>);
}  // namespace stepit
